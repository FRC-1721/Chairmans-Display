class Ring {
  private:
    int LED_START_RANGE, LED_STOP_RANGE;
    
    CRGB leds;

  public:
    Ring(int _LED_START_RANGE, int _LED_STOP_RANGE, CRGB _leds){
      LED_START_RANGE = _LED_START_RANGE;
      LED_STOP_RANGE = _LED_STOP_RANGE;

      leds = _leds;
    }
    
    void setBright(int brightness){
      for (int i = LED_START_RANGE; i < LED_STOP_RANGE; i++){
        leds[i] = CRGB::Red;
      }
      FastLED.show();
    };
};
