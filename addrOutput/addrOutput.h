#include "Arduino.h"
#include <FastLED.h>

class addrOut
{
  public:
    addrOut(CRGB *ledArray, int ledCount);
    void on(int num);
    void off(int num);
    CRGB* leds = 0;
    int ledCount;
};
