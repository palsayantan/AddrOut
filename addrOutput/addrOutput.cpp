#include "Arduino.h"
#include "addrOutput.h"
#include <FastLED.h>

#define MAX_OUTPUT 1024
String data[MAX_OUTPUT];
  
addrOut::addrOut(CRGB *ledArray, int numLeds) {
  leds = ledArray;
  ledCount = numLeds;
}


void addrOut::on(int num) {
  String color;
  num -= 1;

  if (num % 3 == 0) {
    data[num] = "ff";
    color = "0x" + data[num] + data[num + 1] + data[num + 2];
  }
  if (num % 3 == 1) {
    data[num] = "ff";
    color = "0x" + data[num - 1] + data[num] + data[num + 1];
  }
  if (num % 3 == 2) {
    data[num] = "ff";
    color = "0x" + data[num - 2] + data[num - 1] + data[num];
  }

  leds[num / 3] = strtol(color.c_str(), NULL, 16);
  FastLED.show();
}

void addrOut::off(int num) {
  String  color;
  num -= 1;

  if (num % 3 == 0) {
    data[num] = "00";
    color = "0x" + data[num] + data[num + 1] + data[num + 2];
  }
  if (num % 3 == 1) {
    data[num] = "00";
    color = "0x" + data[num - 1] + data[num] + data[num + 1];
  }
  if (num % 3 == 2) {
    data[num] = "00";
    color = "0x" + data[num - 2] + data[num - 1] + data[num];
  }

  leds[num / 3] = strtol(color.c_str(), NULL, 16);
  FastLED.show();
}
