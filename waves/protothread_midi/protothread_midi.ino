
// Credit:
// Midi to Arduino Converter
//     - Andy Tran (extramaster), 2015
// https://www.extramaster.net/tools/midiToArduino/
//
// Process:
// Midi -> Midi tracks -> Note mappings -> Frequency
//
// CC0
    
#include "pt.h"   // include protothread library
#include "timer.h"

// Set this to be the pin that your buzzer resides in. (Note that you can only have one buzzer actively using the PWM signal at a time).
int tonePin = 5;
boolean enablePtreplaceMe698465 = true;

static struct pt ptreplaceMe698465;

void setup() {
  PT_INIT(&ptreplaceMe698465);  // protothread variable
}

static PT_THREAD(protothreadreplaceMe698465(struct pt *pt)) {
  static struct timer treplaceMe698465;
  PT_BEGIN(pt);
  while (enablePtreplaceMe698465) {
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 440, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 523, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 659, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 246, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 369, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    timer_set(&treplaceMe698465, 1666.66666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 440, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 523, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 659, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 246, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 369, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    timer_set(&treplaceMe698465, 8333.33333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 440, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 523, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 659, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 246, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 369, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    timer_set(&treplaceMe698465, 1458.33333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 440, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 523, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 659, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 246, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 369, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    timer_set(&treplaceMe698465, 18125.0); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 440, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 523, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 659, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 246, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 369, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    timer_set(&treplaceMe698465, 1458.33333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 440, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 523, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 659, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 246, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 369, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 440, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 523, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 659, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 246, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 369, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    timer_set(&treplaceMe698465, 1458.33333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 440, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 281.25);
    timer_set(&treplaceMe698465, 312.5); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 523, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 391, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 493, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 659, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 293, 93.75);
    timer_set(&treplaceMe698465, 104.166666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 246, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 369, 187.5);
    timer_set(&treplaceMe698465, 208.333333333); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));
    tone(tonePin, 329, 375.0);
    timer_set(&treplaceMe698465, 416.666666667); PT_WAIT_UNTIL(pt, timer_expired(&treplaceMe698465));

    }
  PT_END(pt);
}

void loop() {
  protothreadreplaceMe698465(&ptreplaceMe698465); // schedule the protothread
}
        
