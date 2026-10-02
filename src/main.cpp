#include <Arduino.h>
#include "sounds.h"
#include <gpio_viewer.h>

GPIOViewer gpio_viewer;

void setup() {
  initSoundSetup();
  Serial.begin(115200);
 
  // Connect to Wi-Fi
  gpio_viewer.connectToWifi(WIFI_SSID, WIFI_PASSWORD);

  // Comment the next line, If your code aleady include connection to Wifi in mode WIFI_STA (WIFI_AP and WIFI_AP_STA are not supported)
  // gpio_viewer.setPort(5555);                 // You can set the http port, if not set default port is 8080

  // Your own setup code start here

  // Must be at the end of your setup
  // gpio_viewer.setSamplingInterval(25); // You can set the sampling interval in ms, if not set default is 100ms
  gpio_viewer.begin();

}

void loop() {
  soundsLoop();
}
