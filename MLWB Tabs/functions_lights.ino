//
// Ron D Bentley, Stafford, UK, July 2021
//
// This example and code is in the public domain and
// may be used without restriction and without warranty.
//
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// LED/light data and functions...
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
//

#define max_lights  8
#define off   0
#define on    1
#define flash 2

#define forwards   0
#define reverse    1
#define backwards  1

#define light1  1
#define light2  2
#define light3  3
#define light4  4
#define light5  5
#define light6  6
#define light7  7
#define light8  8

volatile int pins[max_lights] = {
  2, 3, 4, 5, 6, 7, 8, 9
};

//
// define a structure to record the status and process requirements
// for each light (led).
//
volatile struct led_control {
  uint8_t status;    // led mode - on, off or flash
  uint32_t start;    // used by flash function
  float duration; // used by flash function
  bool horl;         // used by flash function - led is alternated between LOW/HIGH
} lights[max_lights];

//
// turn on the given light (led).
//
void light_on(int light) {
  light = light - 1;
  if (light >= 0 && light < max_lights) {
    digitalWrite(pins[light], HIGH);
    noInterrupts();
    lights[light].status = on;
    lights[light].horl = HIGH;
    interrupts();
  }
}

//
// turn off the given light (led).
//
void light_off(int light) {
  light = light - 1;
  if (light >= 0 && light < max_lights) {
    digitalWrite(pins[light], LOW);
    noInterrupts();
    lights[light].status = off;
    lights[light].horl = LOW;
    interrupts();
  }
}

//
// turn on all defined lights (leds).
//
void all_lights_on() {
  for (uint8_t light = 1; light <= max_lights; light++) {
    light_on(light);
  }
}

//
// turn off all defined lights (leds).
//
void all_lights_off() {
  for (uint8_t light = 1; light <= max_lights; light++) {
    light_off(light);
  }
}

//
// start the flash cycle for the given light (led),
// with given 1/2 frequency.  ie frequency = 2 x duration.
// Note that flashing is controlled by the timer1 ISR and so
// is non-blocking.
//
void flash_light(int light, float duration) {
  light = light - 1;
  if (lights[light].status != flash) {
    lights[light].duration = duration * 1000;
    lights[light].start = millis();
    noInterrupts();
    lights[light].status = flash;
    lights[light].horl = HIGH;
    interrupts();
    digitalWrite(pins[light], HIGH);
  }
}

//
// strobe all lights the number of complete cycles illuminating
// each light for the given time, either forwards or backwards
//
//
void strobe_all_lights(bool direction, uint16_t num_cycles, float duration) {
  all_lights_off();
  for (uint16_t cycle = 0; cycle < num_cycles; cycle++) {
    if (direction == forwards) {
      for (uint8_t light = 1; light <= max_lights; light++) {
        light_on(light);
        wait(duration);
        light_off(light);
      }
    } else {
      for (uint8_t light = max_lights; light >= 1; light--) {
        light_on(light);
        wait(duration);
        light_off(light);
      }
    }
  }
}

//
// wait for the given time.
// Note that the timer1 ISR will continue whilst this function is 
// delaying the main program flow - any lights that are fashing will
// continue to flash.
//
void wait(float secs) {
  uint32_t start, duration;
  start = millis();
  duration = secs * 1000;
  do {
  } while (millis() - start <= duration);
}

//
// Timer1 interrupt routine - used to process any light (led) defined as 'flash'.
//
ISR(TIMER1_COMPA_vect)
{
  for (uint8_t light = 0; light < max_lights; light++) {
    if (lights[light].status == flash) {
      // flash cycle active for his led
      if (millis() - lights[light].start >= lights[light].duration) {
        lights[light].horl = !lights[light].horl; // invert light (led) status
        digitalWrite(pins[light], lights[light].horl);
        lights[light].start = millis(); // restart counter
      }
    }
  }
}
