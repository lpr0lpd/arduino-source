//>>> The latest version of this code can be found at https://github.com/jcw/ !!

// Grpahics library for 128x64 display based on ST7565 (JeeLabs Graphics Board)
// $Id: GLCD_ST7565.h 7763 2011-12-11 01:28:16Z jcw $
//
// Originally derived from code by cstone@pobox.com and Limor Fried / Adafruit.
// Massive changes by Steve Evans and Jean-Claude Wippler, see GLCD_ST7565.cpp
// Licensed as LGPL.

#include <Arduino.h>

#define BLACK         0
#define WHITE         1

#define LCDWIDTH      128
#define LCDHEIGHT     64

#define SCROLLUP      1
#define SCROLLDOWN    2
#define SCROLLLEFT    3
#define SCROLLRIGHT   4

class GLCD_ST7565 {
public:
    GLCD_ST7565 () {}

    static void begin();
    static void backLight(byte level);
    static void clear();
    static void refresh();

    static byte setFont (const byte* font);
    static void setPixel   (byte x , byte y   , byte color);
    static void fillCircle (byte x0, byte y0  , byte r , byte color);
    static void drawCircle (byte x0, byte y0  , byte r , byte color);
    static void drawRect   (byte x , byte y   , byte w , byte h , byte color);
    static void fillRect   (byte x , byte y   , byte w , byte h , byte color);
    static void drawLine   (byte x0, byte y0  , byte x1, byte y1, byte color);
    static byte drawChar   (byte x , byte y, char c);
    static byte drawString (byte x , byte y, const char *c);
    static byte drawString_P (byte x, byte y, const char *c);
    static void drawTriangle (byte x0, byte y0, byte x1, byte y1, byte x2, byte y2, byte color);
    static void fillTriangle (byte x0, byte y0, byte x1, byte y1, byte x2, byte y2, byte color);
    static void drawBitmap (byte x, byte y, const byte *bitmap, byte w, byte h, byte color);
    static void scroll(byte direction, byte pixels);  
 
    static void updateDisplayArea(byte x0,byte y0,byte x1,byte y1,byte reset);
    static void setUpdateArea(byte x0,byte y0,byte x1,byte y1, byte allowReduction);    
};
