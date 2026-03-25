#include <Arduino.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 32

#define OLED_RESET -1
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(9600);
  delay(1000);

  // SSD1306_SWITCHCAPVCC = generate display voltage from 3.3V internally
  // 0x3C is the standard I2C address for 128x32 OLEDs
  if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
    Serial.println(F("Failed to Load"));
    for(;;); // Don't proceed, loop forever
  }

  // Clear the buffer (removes the default Adafruit splash screen)
  display.clearDisplay();

  // Set up text properties
  display.setTextSize(3);
  display.setTextColor(SSD1306_WHITE);
  display.setCursor(0, 0);
  
  display.println(F("Hello World"));

  display.display();
}

void loop() {
  // Nothing needed here, the display holds the image!
}