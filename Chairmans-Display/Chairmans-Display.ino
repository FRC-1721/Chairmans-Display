#include <FastLED.h>

#define NUM_LEDS 600 // Number of LEDs in the strip
#define DATA_PIN 7

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
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
}
