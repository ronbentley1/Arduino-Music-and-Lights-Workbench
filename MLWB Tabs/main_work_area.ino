//
// Ron D Bentley, Stafford, UK, July 2021
//
// This example and code is in the public domain and
// may be used without restriction and without warranty.
//
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// Add your commands here below, and note that when the last command has
// been actioned the program will restart.
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void loop() {
  /*%%%%%%%%%%%%%%%%%%%%% tasters & example features %%%%%%%%%%%%%%%%%%%%%%
    The following code is provided as a taster and example of what features
    the workbench can provide and how they can be used.
    Once familiar with these features, strip out this code and add your own.
  */

  // some music examples...

  middle_C();
  wait(3);

  twinkle_twinkle();
  wait(3);

  jingle_bells();
  wait(3);

  happy_birthday();
  wait(3);

  ditty_1(); // music with lights
  wait(3);

  door_bell_1(); // music with lights
  wait(3);

  door_bell_2(); // music with lights
  wait(3);

  ode_to_joy();
  wait(3);

  // some light examples...

  sweep_lights();
  wait(3);

  chasing_lights();
  wait(3);

  marching_lights();
  wait(3);

  // flash all lights for 10 seconds
  flash_all_lights();
  wait(10);

  // strobe all lights backwards - 10 cycles, with 0.1 secs delay bewteen lights
  strobe_all_lights(backwards, 10, 0.1);
  // strobe all lights forwards - 20 cycles, with 0.05 secs delay bewteen lights
  strobe_all_lights(forwards, 20, 0.05);

  // more flash flash examples
  flash_light(light2, 0.1);
  flash_light(light4, 0.2);
  flash_light(light6, 0.25);
  flash_light(light8, 0.5);
  wait(3);

  // 4 cycles of morse code
  sos_morse_code();
  sos_morse_code();
  sos_morse_code();
  sos_morse_code();
  wait(3);

  // trafic lights
  traffic_lights();
  all_lights_off();
  // back to the beginning...
}
