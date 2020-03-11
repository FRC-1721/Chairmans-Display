#include <FastLED.h>
#include "Ring.h" // Include a class for constructing rings

#define NUM_LEDS 300 // Number of LEDs in the strip
#define DATA_PIN 7

// Define the array of leds
CRGB leds[NUM_LEDS];

// Rings
Ring testRing(0, 40, leds);

void setup() {
    // Setup LEDs
    FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
}

void loop() {
  // Testing
  testRing.setBright(20);
  delay(500);
}
