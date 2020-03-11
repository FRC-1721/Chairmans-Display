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
  // Turn the LED on, then pause
  fill_solid(leds, NUM_LEDS, CRGB::Red);
  FastLED.show();
  delay(500);
  // Now turn the LED off, then pause
  //leds[0] = CRGB::Black;
  FastLED.clear();
  FastLED.show();
  delay(500);

  // Testing
  testRing.setBright(20);
}
