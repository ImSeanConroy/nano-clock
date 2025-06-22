/*
 * ============================================================
 * Project: Nano Clock (Internet Clock)
 * Developer: Sean Conroy
 * Board: Seeed Studio Xiao ESP32S3
 * License: MIT
 * Description:
 *   - This script creates a digital clock using the ESP32's internal timing.
 *   - It synchronizes time over the internet using NTP (Network Time Protocol).
 *   - Displays time in HH:MM:SS format on an SSD1306 OLED display.
 *   - Requires WiFi connection to fetch accurate time from "pool.ntp.org".
 * ============================================================
 */

#include "secrets.h"

#include <WiFi.h>
#include <NTPClient.h>
#include <WiFiUdp.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Timekeeping Variables
int hours, minutes, seconds;
int timeOffset = 0;

// NTP Client Setup
WiFiUDP ntpUDP;
NTPClient timeClient(ntpUDP, "pool.ntp.org", timeOffset);

// OLED Configuration
#define SCREEN_WIDTH   128
#define SCREEN_HEIGHT  32
#define OLED_RESET     -1
#define SCREEN_ADDRESS 0x3C
Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);

void setup() {
  Serial.begin(115200);
  while (!Serial);

  // Initialize OLED
  if (!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) {
    Serial.println(F("SSD1306 allocation failed"));
    for (;;);
  }

  // Connect to WiFi
  WiFi.begin(WIFI_SSID, WIFI_PASSWORD);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("WiFi connected");

  // Initialize NTP client
  timeClient.begin();

  delay(2000); 
  display.clearDisplay();
  Serial.println("Clock starting...");
}

void loop() {
  timeClient.update();
  hours = timeClient.getHours();
  minutes = timeClient.getMinutes();
  seconds = timeClient.getSeconds();

  updateDisplay();
  delay(1000);
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
