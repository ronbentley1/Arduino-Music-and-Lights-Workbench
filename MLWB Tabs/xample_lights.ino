//
// Ron D Bentley, Stafford, UK, July 2021
//
// This example and code is in the public domain and
// may be used without restriction and without warranty.
//
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// %                  Example 'shrink-wrapped' light               %
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%


void sweep_lights() {// sweep lights to the centre
  all_lights_off();  // start with 'clean slate'

  light_on(light1);
  light_on(light8);
  wait(0.25);
  light_off(light1);
  light_off(light8);

  light_on(light2);
  light_on(light7);
  wait(0.25);
  light_off(light2);
  light_off(light7);

  light_on(light3);
  light_on(light6);
  wait(0.25);
  light_off(light3);
  light_off(light6);

  light_on(light4);
  light_on(light5);
  wait(0.25);
  light_off(light4);
  light_off(light5);

  wait(0.1);

  light_on(light4);
  light_on(light5);
  wait(0.25);
  light_off(light4);
  light_off(light5);

  light_on(light3);
  light_on(light6);
  wait(0.25);
  light_off(light3);
  light_off(light6);

  light_on(light2);
  light_on(light7);
  wait(0.25);
  light_off(light2);
  light_off(light7);

  light_on(light1);
  light_on(light8);
  wait(0.25);
  light_off(light1);
  light_off(light8);
}

void chasing_lights() {// light chase
  all_lights_off();    // start with 'clean slate'

  light_on(light1);
  wait(0.1);
  light_on(light2);
  wait(0.1);
  light_on(light3);
  wait(0.1);
  light_on(light4);
  wait(0.1);
  light_on(light5);
  wait(0.1);
  light_on(light6);
  wait(0.1);
  light_on(light7);
  wait(0.1);
  light_on(light8);
  wait(0.1);

  light_off(light1);
  wait(0.1);
  light_off(light2);
  wait(0.1);
  light_off(light3);
  wait(0.1);
  light_off(light4);
  wait(0.1);
  light_off(light5);
  wait(0.1);
  light_off(light6);
  wait(0.1);
  light_off(light7);
  wait(0.1);
  light_off(light8);
  wait(0.1);
}

void marching_lights() {// marching lights
  all_lights_off();     // start with 'clean slate'
  light_on(light1);
  wait(0.1);
  light_off(light1);
  wait(0.1);
  light_on(light1);
  light_on(light2);
  wait(0.1);
  light_off(light1);
  light_off(light2);
  wait(0.1);
  light_on(light1);
  light_on(light2);
  light_on(light3);
  wait(0.1);
  light_off(light1);
  light_off(light2);
  light_off(light3);
  wait(0.1);
  light_on(light1);
  light_on(light2);
  light_on(light3);
  light_on(light4);
  wait(0.1);
  light_off(light1);
  light_off(light2);
  light_off(light3);
  light_off(light4);
  wait(0.1);
  light_on(light2);
  light_on(light3);
  light_on(light4);
  light_on(light5);
  wait(0.1);
  light_off(light2);
  light_off(light3);
  light_off(light4);
  light_off(light5);
  wait(0.1);
  light_on(light3);
  light_on(light4);
  light_on(light5);
  light_on(light6);
  wait(0.1);
  light_off(light3);
  light_off(light4);
  light_off(light5);
  light_off(light6);
  wait(0.1);
  light_on(light4);
  light_on(light5);
  light_on(light6);
  light_on(light7);
  wait(0.1);
  light_off(light4);
  light_off(light5);
  light_off(light6);
  light_off(light7);
  wait(0.1);
  light_on(light5);
  light_on(light6);
  light_on(light7);
  light_on(light8);
  wait(0.1);
  light_off(light5);
  light_off(light6);
  light_off(light7);
  light_off(light8);
  wait(0.1);
  light_on(light6);
  light_on(light7);
  light_on(light8);
  wait(0.1);
  light_off(light6);
  light_off(light7);
  light_off(light8);
  wait(0.1);
  light_on(light7);
  light_on(light8);
  wait(0.1);
  light_off(light7);
  light_off(light8);
  wait(0.1);
  light_on(light8);
  wait(0.1);
  light_off(light8);
  wait(0.1);






}

void flash_all_lights() {
  // commands stated indivually rather than use of for-loop
  // as we do not introduce such constructs in this workbench
  flash_light(light1, 0.1);
  flash_light(light2, 0.2);
  flash_light(light3, 0.3);
  flash_light(light4, 0.4);
  flash_light(light5, 0.5);
  flash_light(light6, 0.6);
  flash_light(light7, 0.7);
  flash_light(light8, 0.8);
}

void sos_morse_code() {// performs 1 cycle
  // sos morse code, - - -  . . . etc
  // dash, dash, dash
  all_lights_on();
  wait(0.5);
  all_lights_off();
  wait(0.5);
  all_lights_on();
  wait(0.5);
  all_lights_off();
  wait(0.5);
  all_lights_on();
  wait(0.5);
  all_lights_off();
  // change signal to dot, dot, dot
  wait(1);
  all_lights_on();
  wait(0.25);
  all_lights_off();
  wait(0.25);
  all_lights_on();
  wait(0.25);
  all_lights_off();
  wait(0.25);
  all_lights_on();
  wait(0.25);
  all_lights_off();
  wait(1);
}

// traffic lights
// this function assumes that the leds are arranged in colurs:
// light1 - red
// light2 - yellow
// light3 - green
// light4 - n/a
// light5 - red
// light6 - yellow
// light7 - green
// light8 - n/a
//
void traffic_lights() {
  all_lights_off();
  // start with road 1 on red and road 2 on green
  light_on(light1); // turn on road 1 red
  light_on(light7); // turn road 2 green
  wait(5);

  // now transition
  light_on(light6);  // turn on road 2 amber
  light_off(light7); // turn off road 2 green
  wait(3);

  light_on(light2);  // turn on road 1 amber
  light_on(light5);  // turn on road 1 red
  light_off(light6); // turn off road 2 amber
  wait(3);

  light_off(light1);  // turn off road 1 red
  light_off(light2);  // turn off road 1 amber
  light_on(light3);   // turn on road 1 green
  wait(5);

}
