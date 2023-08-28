#include "icons.h"

#define ICON_HEIGHT 48
#define ICON_WIDTH 4480

const unsigned char wi_celsius[]  = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 
  0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f, 
  0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f, 
  0xff, 0xff, 0xff, 0xfc, 0x18, 0x3f, 
  0xff, 0xff, 0xff, 0xfc, 0x3c, 0x3f, 
  0xff, 0xff, 0xff, 0xfc, 0x3c, 0x3f, 
  0xff, 0xff, 0xff, 0xfc, 0x18, 0x3f, 
  0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f, 
  0xff, 0xff, 0xff, 0xfe, 0x00, 0x7f, 
  0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xc3, 0xff, 
  0xff, 0xff, 0xe0, 0x1f, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x07, 0xff, 0xff, 
  0xff, 0xfe, 0x00, 0x01, 0xff, 0xff, 
  0xff, 0xf8, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xf0, 0x00, 0x00, 0x3f, 0xff, 
  0xff, 0xe0, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xe0, 0x0f, 0xc0, 0x1f, 0xff, 
  0xff, 0xc0, 0x3f, 0xf0, 0x0f, 0xff, 
  0xff, 0x80, 0x7f, 0xf8, 0x07, 0xff, 
  0xff, 0x80, 0xff, 0xfc, 0x07, 0xff, 
  0xff, 0x81, 0xff, 0xfe, 0x07, 0xff, 
  0xff, 0x01, 0xff, 0xfe, 0x03, 0xff, 
  0xff, 0x03, 0xff, 0xff, 0x03, 0xff, 
  0xff, 0x03, 0xff, 0xff, 0x03, 0xff, 
  0xff, 0x03, 0xff, 0xff, 0x03, 0xff, 
  0xff, 0x03, 0xff, 0xff, 0x03, 0xff, 
  0xff, 0x03, 0xff, 0xff, 0x03, 0xff, 
  0xff, 0x03, 0xff, 0xff, 0x03, 0xff, 
  0xff, 0x01, 0xff, 0xfe, 0x03, 0xff, 
  0xff, 0x81, 0xff, 0xfe, 0x07, 0xff, 
  0xff, 0x81, 0xff, 0xfc, 0x07, 0xff, 
  0xff, 0x87, 0xff, 0xfe, 0x07, 0xff, 
  0xff, 0xdf, 0xff, 0xff, 0x8f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char wi_cloudy[]  = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0x81, 0xff, 0xff, 0xff, 
  0xff, 0xfe, 0x00, 0x7f, 0xff, 0xff, 
  0xff, 0xf8, 0x00, 0x1f, 0xff, 0xff, 
  0xff, 0xf0, 0x00, 0x0f, 0xff, 0xff, 
  0xff, 0xf0, 0x3c, 0x0f, 0xff, 0xff, 
  0xff, 0xe0, 0xff, 0x07, 0xff, 0xff, 
  0xff, 0xe1, 0xff, 0x87, 0xff, 0xff, 
  0xff, 0xc1, 0xff, 0x83, 0xff, 0xff, 
  0xff, 0xc3, 0xff, 0xc3, 0xff, 0xff, 
  0xff, 0xc3, 0xff, 0xc3, 0xff, 0xff, 
  0xff, 0xc3, 0xff, 0xc1, 0xff, 0xff, 
  0xff, 0xc3, 0xff, 0xc0, 0x7f, 0xff, 
  0xff, 0xc3, 0xff, 0xe0, 0x3f, 0xff, 
  0xff, 0xc3, 0xff, 0xf8, 0x1f, 0xff, 
  0xff, 0xc3, 0xff, 0xfe, 0x0f, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0x0f, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0x07, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0x87, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0x83, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0xc3, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0xc3, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0xc3, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0xc3, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0xc3, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0xc3, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0x87, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0x87, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0x07, 0xff, 
  0xff, 0xc3, 0xff, 0xff, 0x0f, 0xff, 
  0xff, 0xc3, 0xff, 0xfe, 0x0f, 0xff, 
  0xff, 0xc3, 0xff, 0xf8, 0x1f, 0xff, 
  0xff, 0xc3, 0xff, 0xe0, 0x3f, 0xff, 
  0xff, 0xc3, 0xfc, 0x00, 0x7f, 0xff, 
  0xff, 0xc3, 0xfc, 0x01, 0xff, 0xff, 
  0xff, 0xc3, 0xfc, 0x07, 0xff, 0xff, 
  0xff, 0xc3, 0xfc, 0x3f, 0xff, 0xff, 
  0xff, 0xc3, 0xfc, 0x3f, 0xff, 0xff, 
  0xff, 0xc3, 0xfc, 0x3f, 0xff, 0xff, 
  0xff, 0xc1, 0xf8, 0x3f, 0xff, 0xff, 
  0xff, 0xe0, 0xf0, 0x7f, 0xff, 0xff, 
  0xff, 0xe0, 0x00, 0x7f, 0xff, 0xff, 
  0xff, 0xf0, 0x00, 0xff, 0xff, 0xff, 
  0xff, 0xf8, 0x01, 0xff, 0xff, 0xff, 
  0xff, 0xfe, 0x07, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char wi_pouring[]  = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xf0, 0x00, 0x7f, 0xff, 
  0xff, 0xff, 0xc0, 0x00, 0x3f, 0xff, 
  0xff, 0xff, 0xc0, 0xf0, 0x3f, 0xff, 
  0xff, 0xff, 0x83, 0xfc, 0x1f, 0xff, 
  0xff, 0xff, 0x87, 0xfe, 0x1f, 0xff, 
  0xff, 0xff, 0xcf, 0xfe, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 
  0xff, 0xe1, 0xff, 0xff, 0x01, 0xff, 
  0xff, 0xc0, 0x3f, 0xff, 0x80, 0xff, 
  0xff, 0xe0, 0x03, 0xff, 0xe0, 0x7f, 
  0xff, 0xe0, 0x00, 0xff, 0xf8, 0x3f, 
  0xff, 0xfc, 0x00, 0xff, 0xfc, 0x3f, 
  0xff, 0xff, 0xc0, 0xff, 0xfc, 0x1f, 
  0xfd, 0xff, 0xff, 0xff, 0xfe, 0x1f, 
  0xf8, 0x1f, 0xff, 0xff, 0xfe, 0x0f, 
  0xf8, 0x01, 0xff, 0xff, 0xff, 0x0f, 
  0xf8, 0x00, 0x1f, 0xff, 0xff, 0x0f, 
  0xfe, 0x00, 0x03, 0xff, 0xff, 0x0f, 
  0xff, 0xe0, 0x00, 0xff, 0xff, 0x0f, 
  0xff, 0xfc, 0x00, 0xff, 0xff, 0x0f, 
  0xff, 0xff, 0xc0, 0xff, 0xff, 0x0f, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 
  0xff, 0xff, 0xff, 0xff, 0xfe, 0x1f, 
  0xff, 0xe1, 0xff, 0xff, 0xfc, 0x1f, 
  0xff, 0xc0, 0x3f, 0xff, 0xfc, 0x3f, 
  0xff, 0xe0, 0x03, 0xff, 0xf8, 0x3f, 
  0xff, 0xe0, 0x00, 0xff, 0xe0, 0x7f, 
  0xff, 0xfc, 0x00, 0xff, 0x80, 0xff, 
  0xff, 0xff, 0xc0, 0xf0, 0x01, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0x1f, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0xcf, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0x87, 0xe0, 0xff, 0xff, 
  0xff, 0xff, 0x83, 0xc1, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char wi_rain[]  = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x00, 0x7f, 0xff, 
  0xff, 0xff, 0xc0, 0xf0, 0x3f, 0xff, 
  0xff, 0xff, 0x83, 0xfc, 0x1f, 0xff, 
  0xff, 0xff, 0x87, 0xfe, 0x1f, 0xff, 
  0xff, 0xff, 0x07, 0xfe, 0x0f, 0xff, 
  0xff, 0xff, 0x0f, 0xff, 0x0f, 0xff, 
  0xff, 0xff, 0x0f, 0xff, 0x0f, 0xff, 
  0xff, 0xff, 0x0f, 0xff, 0x07, 0xff, 
  0xff, 0xff, 0x9f, 0xff, 0x03, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x80, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 
  0xff, 0x81, 0xff, 0xff, 0xf8, 0x3f, 
  0xfe, 0x00, 0x7f, 0xff, 0xfc, 0x3f, 
  0xfc, 0x00, 0x1f, 0xff, 0xfc, 0x1f, 
  0xf8, 0x00, 0x0f, 0xff, 0xfe, 0x1f, 
  0xf8, 0x3c, 0x03, 0xff, 0xfe, 0x1f, 
  0xf0, 0x7f, 0x01, 0xff, 0xff, 0x0f, 
  0xf0, 0xff, 0xc0, 0xff, 0xff, 0x0f, 
  0xf0, 0xff, 0xe0, 0x7f, 0xff, 0x0f, 
  0xf0, 0xff, 0xe0, 0x7f, 0xff, 0x0f, 
  0xf0, 0xff, 0xc0, 0xff, 0xff, 0x0f, 
  0xf0, 0x7f, 0x01, 0xff, 0xff, 0x0f, 
  0xf8, 0x3c, 0x03, 0xff, 0xfe, 0x1f, 
  0xf8, 0x00, 0x0f, 0xff, 0xfe, 0x1f, 
  0xfc, 0x00, 0x1f, 0xff, 0xfc, 0x1f, 
  0xfe, 0x00, 0x7f, 0xff, 0xf8, 0x3f, 
  0xff, 0x81, 0xff, 0xff, 0xf8, 0x3f, 
  0xff, 0xff, 0xff, 0xff, 0xe0, 0x7f, 
  0xff, 0xff, 0xff, 0xff, 0x80, 0xff, 
  0xff, 0xff, 0x9f, 0xf0, 0x01, 0xff, 
  0xff, 0xff, 0x0f, 0xf0, 0x07, 0xff, 
  0xff, 0xff, 0x0f, 0xf0, 0x3f, 0xff, 
  0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0x07, 0xe0, 0xff, 0xff, 
  0xff, 0xff, 0x83, 0xc1, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char wi_lightning_rainy[]  = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xf0, 0x00, 0x7f, 0xff, 
  0xff, 0xff, 0xc0, 0x00, 0x3f, 0xff, 
  0xff, 0xff, 0xc0, 0xf0, 0x3f, 0xff, 
  0xff, 0xff, 0x83, 0xfc, 0x1f, 0xff, 
  0xff, 0xff, 0x87, 0xfe, 0x1f, 0xff, 
  0xff, 0xff, 0xcf, 0xfe, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x07, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0x01, 0xff, 
  0xff, 0xfd, 0xff, 0xff, 0x80, 0xff, 
  0xff, 0xfc, 0x3f, 0xff, 0xe0, 0x7f, 
  0xff, 0xfc, 0x0f, 0xff, 0xf8, 0x3f, 
  0xff, 0xfc, 0x03, 0xff, 0xfc, 0x3f, 
  0xfc, 0x3c, 0x00, 0x7f, 0xfc, 0x1f, 
  0xff, 0x00, 0x00, 0x3f, 0xfe, 0x1f, 
  0xff, 0x80, 0x00, 0x3f, 0xfe, 0x0f, 
  0xff, 0xe0, 0x20, 0x3f, 0xff, 0x0f, 
  0xff, 0xf8, 0x38, 0x3f, 0xff, 0x0f, 
  0xff, 0xfe, 0x3e, 0x3f, 0xff, 0x0f, 
  0xff, 0xff, 0xbf, 0xbf, 0xff, 0x0f, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 
  0xff, 0x87, 0xff, 0xff, 0xff, 0x0f, 
  0xfe, 0x01, 0xff, 0xff, 0xfe, 0x1f, 
  0xfc, 0x00, 0xff, 0xff, 0xfe, 0x1f, 
  0xfc, 0x00, 0x3f, 0xff, 0xfc, 0x1f, 
  0xfc, 0x00, 0x1f, 0xff, 0xfc, 0x3f, 
  0xfc, 0x00, 0x3f, 0xff, 0xf8, 0x3f, 
  0xfc, 0x00, 0xff, 0xff, 0xe0, 0x7f, 
  0xfe, 0x01, 0xff, 0xff, 0x80, 0xff, 
  0xff, 0x07, 0xff, 0xf0, 0x01, 0xff, 
  0xff, 0xff, 0xff, 0xf0, 0x07, 0xff, 
  0xff, 0xff, 0x9f, 0xf0, 0x1f, 0xff, 
  0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0x0f, 0xf0, 0xff, 0xff, 
  0xff, 0xff, 0x07, 0xe0, 0xff, 0xff, 
  0xff, 0xff, 0x83, 0xc1, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xc0, 0x03, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x1f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char wi_snowy[]  = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0x81, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0x00, 0x7f, 0xff, 
  0xff, 0xff, 0xf8, 0x00, 0x1f, 0xff, 
  0xff, 0xff, 0xf8, 0x00, 0x0f, 0xff, 
  0xff, 0xff, 0xf0, 0x3c, 0x0f, 0xff, 
  0xff, 0xff, 0xf8, 0xff, 0x07, 0xff, 
  0xff, 0xfc, 0x7f, 0xff, 0x87, 0xff, 
  0xff, 0xfc, 0x3f, 0xff, 0x83, 0xff, 
  0xff, 0xfc, 0x3e, 0x7f, 0xc3, 0xff, 
  0xff, 0xfc, 0x38, 0x3f, 0xc3, 0xff, 
  0xff, 0xfc, 0x10, 0x3f, 0xc1, 0xff, 
  0xff, 0xfe, 0x00, 0x7f, 0xc0, 0x7f, 
  0xff, 0x06, 0x00, 0xff, 0xe0, 0x3f, 
  0xff, 0x00, 0x01, 0xff, 0xf8, 0x1f, 
  0xff, 0x00, 0x03, 0xff, 0xfe, 0x0f, 
  0xff, 0x80, 0x00, 0xff, 0xff, 0x0f, 
  0xff, 0xf0, 0x00, 0x1f, 0xff, 0x07, 
  0xff, 0xf8, 0x00, 0x0f, 0xff, 0x87, 
  0xff, 0xf0, 0x00, 0x0f, 0xff, 0x83, 
  0xff, 0xe0, 0x06, 0x1f, 0xff, 0xc3, 
  0xff, 0xc0, 0x87, 0xff, 0xff, 0xc3, 
  0xff, 0xc1, 0x83, 0xff, 0xff, 0xc3, 
  0xff, 0xc3, 0xc3, 0xff, 0xff, 0xc3, 
  0xff, 0xe7, 0xc3, 0xff, 0xff, 0xc3, 
  0xff, 0xff, 0xc3, 0xff, 0xff, 0xc3, 
  0xff, 0xff, 0xe7, 0xff, 0xff, 0x87, 
  0xfc, 0x7f, 0xff, 0xff, 0xff, 0x87, 
  0xfc, 0x7f, 0xff, 0xff, 0xff, 0x07, 
  0xfc, 0x63, 0xff, 0xff, 0xff, 0x0f, 
  0xfe, 0x03, 0xff, 0xff, 0xfe, 0x0f, 
  0xe6, 0x03, 0xff, 0xff, 0xf8, 0x1f, 
  0xc0, 0x07, 0xff, 0xff, 0xe0, 0x3f, 
  0xc0, 0x07, 0xff, 0xfc, 0x00, 0x7f, 
  0xf8, 0x00, 0xff, 0xfc, 0x01, 0xff, 
  0xf8, 0x00, 0xe7, 0xfc, 0x07, 0xff, 
  0xf0, 0x18, 0xc3, 0xfc, 0x3f, 0xff, 
  0xf0, 0x1f, 0xc3, 0xfc, 0x3f, 0xff, 
  0xf1, 0x8f, 0xc3, 0xfc, 0x3f, 0xff, 
  0xff, 0x8f, 0xc1, 0xf8, 0x3f, 0xff, 
  0xff, 0x8f, 0xe0, 0xf0, 0x7f, 0xff, 
  0xff, 0xff, 0xe0, 0x00, 0x7f, 0xff, 
  0xff, 0xff, 0xf0, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0xf8, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xfe, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char wi_sunny[]  = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xfc, 0xff, 0xff, 0x3f, 0xff, 
  0xff, 0xfc, 0x3f, 0xfc, 0x3f, 0xff, 
  0xff, 0xfc, 0x0f, 0xf0, 0x3f, 0xff, 
  0xff, 0xfc, 0x07, 0xe0, 0x3f, 0xff, 
  0xff, 0xf8, 0x3f, 0xfc, 0x3f, 0xff, 
  0xff, 0xf8, 0xff, 0xff, 0x1f, 0xff, 
  0xff, 0xf9, 0xff, 0xff, 0x9f, 0xff, 
  0xff, 0xfb, 0xf8, 0x1f, 0xdf, 0xff, 
  0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0x03, 0xc0, 0xff, 0xff, 
  0xff, 0xfe, 0x0f, 0xf0, 0x7f, 0xff, 
  0xff, 0x9e, 0x1f, 0xf8, 0x79, 0xff, 
  0xff, 0x3c, 0x1f, 0xf8, 0x3c, 0xff, 
  0xfc, 0x3c, 0x3f, 0xfc, 0x3c, 0x3f, 
  0xf8, 0x3c, 0x3f, 0xfc, 0x3c, 0x1f, 
  0xf8, 0x3c, 0x3f, 0xfc, 0x3c, 0x1f, 
  0xfc, 0x3c, 0x3f, 0xfc, 0x3c, 0x3f, 
  0xff, 0x3c, 0x1f, 0xf8, 0x3c, 0xff, 
  0xff, 0x9e, 0x1f, 0xf8, 0x79, 0xff, 
  0xff, 0xfe, 0x0f, 0xf0, 0x7f, 0xff, 
  0xff, 0xff, 0x03, 0xc0, 0xff, 0xff, 
  0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 
  0xff, 0xff, 0xe0, 0x07, 0xff, 0xff, 
  0xff, 0xfb, 0xf8, 0x1f, 0xdf, 0xff, 
  0xff, 0xf9, 0xff, 0xff, 0x9f, 0xff, 
  0xff, 0xf8, 0xff, 0xff, 0x1f, 0xff, 
  0xff, 0xf8, 0x3f, 0xfc, 0x1f, 0xff, 
  0xff, 0xfc, 0x07, 0xe0, 0x3f, 0xff, 
  0xff, 0xfc, 0x0f, 0xf0, 0x3f, 0xff, 
  0xff, 0xfc, 0x3f, 0xfc, 0x3f, 0xff, 
  0xff, 0xfc, 0xff, 0xff, 0x3f, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};

const unsigned char wi_night_clear[]  = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 
  0xff, 0xff, 0x80, 0x01, 0xff, 0xff, 
  0xff, 0xfe, 0x00, 0x00, 0x7f, 0xff, 
  0xff, 0xf8, 0x00, 0x00, 0x1f, 0xff, 
  0xff, 0xf0, 0x0f, 0xf0, 0x0f, 0xff, 
  0xff, 0xc0, 0x7f, 0xfc, 0x03, 0xff, 
  0xff, 0x80, 0xff, 0xff, 0x01, 0xff, 
  0xff, 0x83, 0xff, 0xff, 0xc0, 0xff, 
  0xff, 0x07, 0xff, 0xff, 0x00, 0xff, 
  0xfe, 0x0f, 0xff, 0xf0, 0x00, 0x7f, 
  0xfc, 0x1f, 0xff, 0xc0, 0x00, 0xff, 
  0xfc, 0x1f, 0xff, 0x00, 0x00, 0xff, 
  0xf8, 0x3f, 0xfc, 0x00, 0xff, 0xff, 
  0xf8, 0x7f, 0xf8, 0x07, 0xff, 0xff, 
  0xf8, 0x7f, 0xf0, 0x1f, 0xff, 0xff, 
  0xf8, 0x7f, 0xe0, 0x7f, 0xfe, 0xff, 
  0xf0, 0xff, 0xc0, 0xff, 0xfc, 0xff, 
  0xf0, 0xff, 0x83, 0xff, 0xf8, 0xff, 
  0xf0, 0xff, 0x07, 0xfc, 0xf8, 0xff, 
  0xf0, 0xff, 0x0f, 0xfe, 0x00, 0xff, 
  0xf0, 0xfe, 0x0f, 0xff, 0x00, 0xff, 
  0xf0, 0xfc, 0x1f, 0xff, 0x00, 0x3f, 
  0xf0, 0xfc, 0x1f, 0xff, 0x80, 0x07, 
  0xf0, 0xfc, 0x3f, 0xff, 0x80, 0x07, 
  0xf8, 0x78, 0x3f, 0xff, 0x00, 0x3f, 
  0xf8, 0x78, 0x7f, 0xff, 0x00, 0xff, 
  0xf8, 0x78, 0x7f, 0xfe, 0x00, 0xff, 
  0xf8, 0x30, 0x7f, 0xfc, 0xf8, 0xff, 
  0xfc, 0x10, 0xff, 0xbf, 0xf8, 0xff, 
  0xfc, 0x10, 0xff, 0x3f, 0xfc, 0xff, 
  0xfe, 0x00, 0xf1, 0x3f, 0xfe, 0xff, 
  0xff, 0x00, 0xf8, 0x3f, 0xff, 0xff, 
  0xff, 0x00, 0xf8, 0x07, 0xff, 0xff, 
  0xff, 0x80, 0xf8, 0x07, 0xff, 0xff, 
  0xff, 0xc0, 0xf8, 0x3f, 0xff, 0xff, 
  0xff, 0xe0, 0xf1, 0x3f, 0xff, 0xff, 
  0xff, 0xfb, 0xff, 0x3f, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xbf, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff
};