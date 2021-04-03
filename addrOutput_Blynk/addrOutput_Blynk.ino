/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#include <FastLED.h>
#include "addrOutput.h"

// You should get Auth Token in the Blynk App.
// Go to the Project Settings (nut icon).
char auth[] = "DoP2Ku_AICUK9S0xGN-xmWqqC-QBVXfE";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "Sayantan";
char pass[] = "SayantaN";

#define NUM_LEDS  8
#define DATA_PIN  2
CRGB leds[NUM_LEDS];

addrOut out(leds, NUM_LEDS);

BLYNK_WRITE(V1) {
  int state = param.asInt();
  if (state == 1)
    out.on(1);
  else
    out.off(1);
}
BLYNK_WRITE(V2) {
  int state = param.asInt();
  if (state == 1)
    out.on(2);
  else
    out.off(2);
}
BLYNK_WRITE(V3) {
  int state = param.asInt();
  if (state == 1)
    out.on(3);
  else
    out.off(3);
}
BLYNK_WRITE(V4) {
  int state = param.asInt();
  if (state == 1)
    out.on(4);
  else
    out.off(4);
}
BLYNK_WRITE(V5) {
  int state = param.asInt();
  if (state == 1)
    out.on(5);
  else
    out.off(5);
}
BLYNK_WRITE(V6) {
  int state = param.asInt();
  if (state == 1)
    out.on(6);
  else
    out.off(6);
}
BLYNK_WRITE(V7) {
  int state = param.asInt();
  if (state == 1)
    out.on(7);
  else
    out.off(7);
}
BLYNK_WRITE(V8) {
  int state = param.asInt();
  if (state == 1)
    out.on(8);
  else
    out.off(8);
}
BLYNK_WRITE(V9) {
  int state = param.asInt();
  if (state == 1)
    out.on(9);
  else
    out.off(9);
}
BLYNK_WRITE(V10) {
  int state = param.asInt();
  if (state == 1)
    out.on(10);
  else
    out.off(10);
}
BLYNK_WRITE(V11) {
  int state = param.asInt();
  if (state == 1)
    out.on(11);
  else
    out.off(11);
}
BLYNK_WRITE(V12) {
  int state = param.asInt();
  if (state == 1)
    out.on(12);
  else
    out.off(12);
}
BLYNK_WRITE(V13) {
  int state = param.asInt();
  if (state == 1)
    out.on(13);
  else
    out.off(13);
}
BLYNK_WRITE(V14) {
  int state = param.asInt();
  if (state == 1)
    out.on(14);
  else
    out.off(14);
}
BLYNK_WRITE(V15) {
  int state = param.asInt();
  if (state == 1)
    out.on(15);
  else
    out.off(15);
}
BLYNK_WRITE(V16) {
  int state = param.asInt();
  if (state == 1)
    out.on(16);
  else
    out.off(16);
}

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  for (int i = 0; i < NUM_LEDS * 3; i++) {
    out.off(i);
  }
  delay(1000);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  Blynk.run();
}
