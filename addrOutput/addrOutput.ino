#include <FastLED.h>
#include "addrOutput.h"

#define NUM_LEDS  8
#define DATA_PIN  2
CRGB leds[NUM_LEDS];

addrOut out(leds, NUM_LEDS);

void setup() {
  Serial.begin(115200);
  FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
  delay(1000);
}

void loop() {
  for(int i = 1; i < NUM_LEDS * 3; i++){
  out.on(i);
  delay(1000);
  out.off(i);
  delay(1000);
  }
}
