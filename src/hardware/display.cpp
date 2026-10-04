#include "hardware/display.h"

#include "hardware/display_font.h"

LGFX tft;

void displayInit() {
  tft.init();
  tft.setRotation(0);
  // Test fill: Fill whole screen bright RED (0xF800)
  // You can also try 0x07E0 (Green) or 0x001F (Blue)
  tft.fillScreen(0xF800); 
  delay(1000); // Hold for 1 second so you can see the test color fill
  
  tft.setBrightness(255);
  tft.setTextWrap(false);
  displayFontInit();
}
