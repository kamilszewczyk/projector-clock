#include <WiFi.h>
#include <WiFiUdp.h>
#include <stdio.h>
#include <time.h>
#include <ArduinoJson.h>
#include <HTTPClient.h>
#include <U8g2lib.h>
#include "DEV_Config.h"
#include "EPD.h"
#include "GUI_Paint.h"
#include <ArduinoOTA.h>
#include "secrets.h"
#include "icons.h"

unsigned long tick = 0;
const unsigned long brightnessRefreshDelay = 5000UL; // 5 seconds
unsigned long brightnessTick = 0;
const unsigned long displayRefreshDelay = 60000UL; // 1 minute
unsigned long displayTick = 0;
const unsigned long sensorRetrieveDelay = 300000UL; // 5 minutes
unsigned long sensorTick = 0;
const unsigned long forecastRetrieveDelay = 10800000UL; // 3 hours
unsigned long forecastTick = 0;

uint8_t PWM_PIN = 0;
const int LED_MIN = 80;
const int LED_MAX = 0;
const int LED_OFF = 256;

uint8_t LCD_RESET_PIN = 4;
uint8_t LCD_CLOCK_PIN = 22;
uint8_t LCD_DATA_PIN = 21;
U8G2_ST7567_HEM6432_F_HW_I2C u8g2(U8G2_MIRROR, LCD_RESET_PIN, LCD_CLOCK_PIN, LCD_DATA_PIN);

// uint8_t BRIGHTNESS_SENSOR_PIN = A0;

WiFiClient wifi;
HTTPClient client;

UBYTE *BlackImage;

String timezone = "CET-1CEST,M3.5.0,M10.5.0/3";

String currentTemp;
String formattedTime;
String forecast[4] = {"", "", "", ""};  
int brightness;

DynamicJsonDocument callApi(String endpoint) {
  client.begin(wifi, String("http://") + HA_IP + ":" + HA_PORT + "/api/" + endpoint);
  client.addHeader("authorization", String("Bearer ") + HA_TOKEN);

  client.GET();
  
  const size_t capacity = 4096;
  DynamicJsonDocument doc(capacity);

  // Parse JSON object
  DeserializationError error = deserializeJson(doc, client.getString());
  if (error) {
    Serial.print(F("deserializeJson() failed: "));
    Serial.println(error.f_str());
  }

  return doc;
}

String padTo(String str, const size_t num, const char paddingChar = ' ')
{
    if(num > str.length()) {
      for(size_t i = 0; i < num - str.length(); i++) {
        str = paddingChar + str;
      }
    }
    return str;
}

String formatDatetime(const char *format) {
  char buffer[20];
  struct tm timeinfo;

  getLocalTime(&timeinfo);
  strftime(buffer, sizeof(buffer), format, &timeinfo);

  String output(buffer);

  return output;
}

const unsigned char* getIcon(String state) {
  if (state.equals("clear-night")) {
    return wi_night_clear;
  }
  if (state.equals("cloudy") || state.equals("partlycloudy")) {
    return wi_cloudy;
  }
  if (state.equals("lightning") || state.equals("lightning-rainy")) {
    return wi_lightning_rainy;
  }
  if (state.equals("pouring")) {
    return wi_pouring;
  }
  if (state.equals("rainy")) {
    return wi_rain;
  }
  if (state.equals("snowy") || state.equals("snowy-rainy")) {
    return wi_snowy;
  }
  
  return wi_sunny;
}

String getWeekdayName(int weekday) {
  switch(weekday) {
    case 0:
      return "nd";
    case 1:
      return "pn";
    case 2:
      return "wt";  
    case 3:
      return "sr";
    case 4:
      return "cz";
    case 5:
      return "pt";
    case 6:
      return "sb";
  }
}

void getForecast(String (& param) [4]) {
  DynamicJsonDocument doc = callApi("states/weather.liski_2");

  JsonObject attributes = doc["attributes"].as<JsonObject>();
  JsonObject future   = attributes["forecast"][0].as<JsonObject>();
  if (formatDatetime("%R").toInt() > 12) {
    JsonObject future   = attributes["forecast"][1].as<JsonObject>();
  }

  param[0] = doc["state"].as<String>(); // Current state
  param[1] = future["condition"].as<String>(); // Future state
  param[2] = padTo(String((int)round(future["temperature"].as<float>())), 2); // Future day temp
  param[3] = padTo(String((int)round(future["templow"].as<float>())), 2); // Future night temp
  Serial.print("Current state: "); Serial.println(param[0]);
  Serial.print("Future state: "); Serial.println(param[1]);
  Serial.print("Future day temp: "); Serial.println(param[2]);
  Serial.print("Future night temp: "); Serial.println(param[3]);
}

String getCurrentTemp() {
  DynamicJsonDocument doc = callApi("states/sensor.outdoor_temperature");

  return padTo(String((int)round(doc["state"].as<float>())), 2);
}

void refreshProjectorLed() {
  u8g2.clearBuffer();	
  u8g2.setFont(u8g2_font_ncenB10_tr);
  u8g2.drawStr(10, 17, formatDatetime("%R").c_str());
  u8g2.sendBuffer();
}

void refreshePaper() {
  EPD_3IN52_Init();
  Paint_Clear(WHITE);

  Paint_DrawString_EN(15, 25, (getWeekdayName(formatDatetime("%w").toInt()) + formatDatetime("%d.%m")).c_str(), &Font, WHITE, BLACK);
  Paint_DrawIcon(getIcon(forecast[0]), 17, 205);
  Paint_DrawString_EN(255, 25, getCurrentTemp().c_str(), &Font, WHITE, BLACK);
  Paint_DrawIcon(wi_celsius, 17, 300);  

  Paint_DrawString_EN(15, 70, formatDatetime("%R").c_str(), &NumericFont100, WHITE, BLACK);

  Paint_DrawIcon(getIcon(forecast[1]), 185, 15);
  Paint_DrawString_EN(65, 193, (forecast[2] + "/" + forecast[3]).c_str(), &Font, WHITE, BLACK);
  Paint_DrawIcon(wi_celsius, 185, 185);  

  EPD_3IN52_display(BlackImage);
  EPD_3IN52_lut_GC();
  EPD_3IN52_refresh();
  DEV_Delay_ms(2000);

  // Sleep & close 5V
  EPD_3IN52_sleep();

  DEV_Delay_ms(2000);//important, at least 2s

}

void setup(){
  Serial.begin(115200);

  // Connect to WiFi
  WiFi.begin(WIFI_SSID, WIFI_PASS);
  while ( WiFi.status() != WL_CONNECTED ) {
    delay ( 500 );
  }  
  Serial.println(WiFi.localIP());
  
  // Start NTP client and get current time
  configTzTime(timezone.c_str(), HA_IP);


  // // Initialize LCD
  u8g2.setI2CAddress(0x7E);
  u8g2.setContrast(128);
  u8g2.begin();

  // Initialize e-paper
  DEV_Module_Init();
  EPD_3IN52_Init();
  EPD_3IN52_display_NUM(EPD_3IN52_WHITE);
  EPD_3IN52_lut_GC();
  EPD_3IN52_refresh();
  EPD_3IN52_SendCommand(0x50);
  EPD_3IN52_SendData(0x17);
  DEV_Delay_ms(500);
  UWORD Imagesize = ((EPD_3IN52_WIDTH % 8 == 0)? (EPD_3IN52_WIDTH / 8 ): (EPD_3IN52_WIDTH / 8 + 1)) * EPD_3IN52_HEIGHT;
  if((BlackImage = (UBYTE *)malloc(Imagesize)) == NULL) {
    printf("Failed to apply for black memory...\r\n");
  }
  Paint_NewImage(BlackImage, EPD_3IN52_WIDTH, EPD_3IN52_HEIGHT, 90, WHITE);

  ArduinoOTA.onStart([]() {
    String type;
    if (ArduinoOTA.getCommand() == U_FLASH) {
      type = "sketch";
    } else { // U_FS
      type = "filesystem";
    }

    // NOTE: if updating FS this would be the place to unmount FS using FS.end()
    Serial.println("Start updating " + type);
  });
  ArduinoOTA.onEnd([]() {
    Serial.println("\nEnd");
  });
  ArduinoOTA.onProgress([](unsigned int progress, unsigned int total) {
    Serial.printf("Progress: %u%%\r", (progress / (total / 100)));
  });
  ArduinoOTA.onError([](ota_error_t error) {
    Serial.printf("Error[%u]: ", error);
    if (error == OTA_AUTH_ERROR) {
      Serial.println("Auth Failed");
    } else if (error == OTA_BEGIN_ERROR) {
      Serial.println("Begin Failed");
    } else if (error == OTA_CONNECT_ERROR) {
      Serial.println("Connect Failed");
    } else if (error == OTA_RECEIVE_ERROR) {
      Serial.println("Receive Failed");
    } else if (error == OTA_END_ERROR) {
      Serial.println("End Failed");
    }
  });

  ArduinoOTA.begin();
  Serial.println("Ready");

  currentTemp = getCurrentTemp(); 
  Serial.println(currentTemp);
  getForecast(forecast);
  refreshePaper();
  refreshProjectorLed();

  // Turn off projector LED
  analogWrite(PWM_PIN, LED_MAX);
}

void loop() {    
  ArduinoOTA.handle();
  tick = millis();

  // if (tick - brightnessTick >= brightnessRefreshDelay) {
  //   Serial.println("Brightness tick");
  //   brightnessTick = tick;

  //   brightness = analogRead(BRIGHTNESS_SENSOR_PIN);
  //   Serial.println(brightness);
  //   if (brightness < 300) {
  //     analogWrite(PWM_PIN, LED_OFF);
  //   } else if (brightness >= 300 && brightness <= 600) {
  //     analogWrite(PWM_PIN, LED_MAX);
  //   } else {
  //     analogWrite(PWM_PIN, LED_MIN);
  //   }
  // }

  if (tick - sensorTick >= sensorRetrieveDelay) {
    Serial.print("Sensor tick");
    sensorTick = tick;
    currentTemp = getCurrentTemp(); 
  }

  if (tick - forecastTick >= forecastRetrieveDelay) {
    Serial.println("Forecast tick");
    forecastTick = tick;
    getForecast(forecast);
  } 

  if (tick - displayTick >= displayRefreshDelay) {
    Serial.println("Display tick");
    displayTick = tick;

    refreshProjectorLed();
    refreshePaper();
  }
}