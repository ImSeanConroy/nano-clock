/*
 * ============================================================
 * Project: Nano Clock (Basic Clock)
 * Developer: Sean Conroy
 * Board: Seeed Studio Xiao ESP32S3
 * License: MIT
 * Description:
 *   - This script simulates a digital clock using the ESP32's internal timing.
 *   - It does NOT use an RTC (Real-Time Clock) module, so it resets when powered off.
 *   - Displays time in HH:MM:SS format on an SSD1306 OLED.
 *   - Update hours, minutes and second to match your local time
 * ============================================================
 */

#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// OLED Configuration
#define SCREEN_WIDTH   128
#define SCREEN_HEIGHT  32
#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

// Timekeeping Variables
unsigned long previousMillis = 0;
const unsigned long interval = 1000;
int hours = 10, minutes = 36, seconds = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial);

  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;) {}
  }

  display.display();
  delay(2000); 
  display.clearDisplay();
  Serial.println("Clock starting...");
}

void loop() {
  unsigned long currentMillis = millis();

  if (currentMillis - previousMillis >= interval) {
    previousMillis = currentMillis;

    updateTime();
    updateDisplay();
  }
}

void updateTime() {
  seconds++;
  if (seconds >= 60) {
    seconds = 0;
    minutes++;
    if (minutes >= 60) {
      minutes = 0;
      hours = (hours + 1) % 24;
    }
  }
  Serial.printf("Time: %02d:%02d:%02d\n", hours, minutes, seconds);
}

void updateDisplay() {
  display.clearDisplay();
  display.setTextSize(3);
  display.setTextColor(WHITE);
  display.setCursor(0, 10);
  
  char timeBuffer[10];
  sprintf(timeBuffer, "%02d:%02d", hours, minutes);
  display.print(timeBuffer);

  display.setTextSize(2);
  display.setCursor(90, 15);
  display.print(":");
  display.printf("%02d", seconds);

  display.display();
}
