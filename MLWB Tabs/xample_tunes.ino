//
// Ron D Bentley, Stafford, UK, July 2021
//
// This eplay(note_ample and code is in the public domain and
// may be used without restriction and without warranty.
//
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// %                      'shrink-wrapped' music examples                  %
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void middle_C() {
  // 4/4 time
  // C major scale - up
  // bar 1
  play(note_C4, crot);
  play(note_D4, crot);
  play(note_E4, crot);
  play(note_F4, crot);
  // bar 2
  play(note_G4, crot);
  play(note_A4, crot);
  play(note_B4, crot);
  play(note_C5, crot);
  // bar 3
  rest(semib);
  // C major scale - down
  // bar 4
  play(note_C5, crot);
  play(note_B4, crot);
  play(note_A4, crot);
  play(note_G4, crot);
  // bar 5
  play(note_F4, crot);
  play(note_E4, crot);
  play(note_D4, crot);
  play(note_C4, crot);
}

void twinkle_twinkle() {
  set_tempo(default_tempo * 2);

  //Twinkle, twinkle, little star, C' C' G' G' A' A' G'
  play(note_C4, minim);
  play(note_C4, minim);
  play(note_G4, minim);
  play(note_G4, minim);
  play(note_A4, minim);
  play(note_A4, minim);
  play(note_G4, minim);
  rest(minim);

  //How I wonder what you are, F' F' E' E' D' D' C'
  play(note_F4, minim);
  play(note_F4, minim);
  play(note_E4, minim);
  play(note_E4, minim);
  play(note_D4, minim);
  play(note_D4, minim);
  play(note_C4, minim);
  rest(minim);

  //Up above the world so high, G' G' F' F' E' E' D'
  play(note_G4, minim);
  play(note_G4, minim);
  play(note_F4, minim);
  play(note_F4, minim);
  play(note_E4, minim);
  play(note_E4, minim);
  play(note_D4, minim);
  rest(minim);

  //Like a diamond in the sky, G' G' F' F' E' E' D'
  play(note_G4, minim);
  play(note_G4, minim);
  play(note_F4, minim);
  play(note_F4, minim);
  play(note_E4, minim);
  play(note_E4, minim);
  play(note_D4, minim);
  rest(minim);

  //Twinkle, twinkle, little star, C' C' G' G' A' A' G'
  play(note_C4, minim);
  play(note_C4, minim);
  play(note_G4, minim);
  play(note_G4, minim);
  play(note_A4, minim);
  play(note_A4, minim);
  play(note_G4, minim);
  rest(minim);

  //How I wonder what you are, F' F' E' E' D' D' C'
  play(note_F4, minim);
  play(note_F4, minim);
  play(note_E4, minim);
  play(note_E4, minim);
  play(note_D4, minim);
  play(note_D4, minim);
  play(note_C4, minim);

  rest(crot);

  set_tempo(default_tempo);  // reset tempo
}

void jingle_bells() {
  set_tempo(default_tempo * 2); // very lively

  play(note_B3, crot);
  play(note_B3, crot);
  play(note_B3, minim);

  play(note_B3, crot);
  play(note_B3, crot);
  play(note_B3, minim);

  play(note_B3, crot);
  play(note_D4, crot);
  play(note_G3, crot);
  play(note_A3, crot);

  play(note_B3, semib);

  play(note_C4, crot);
  play(note_C4, crot);
  play(note_C4, crot);
  play(note_C4, crot);

  play(note_C4, crot);
  play(note_B3, crot);
  play(note_B3, crot);
  play(note_B3, crot);

  play(note_B3, crot);
  play(note_A3, crot);
  play(note_A3, crot);
  play(note_B3, crot);

  play(note_A3, minim);
  play(note_D4, minim);

  play(note_B3, crot);
  play(note_B3, crot);
  play(note_B3, minim);

  play(note_B3, crot);
  play(note_B3, crot);
  play(note_B3, minim);

  play(note_B3, crot);
  play(note_D4, crot);
  play(note_G3, crot);
  play(note_A3, crot);

  play(note_B3, semib);

  play(note_C4, crot);
  play(note_C4, crot);
  play(note_C4, crot);
  play(note_C4, crot);

  play(note_C4, crot);
  play(note_B3, crot);
  play(note_B3, crot);
  play(note_B3, crot);

  play(note_D4, crot);
  play(note_D4, crot);
  play(note_C4, crot);
  play(note_A3, crot);

  play(note_G3, semib);

  set_tempo(default_tempo); // reset tempo
}

void happy_birthday() {
  play(note_G3, quav);
  play(note_G3, quav);
  play(note_A3, crot);
  play(note_G3, crot);

  play(note_C4, crot);
  play(note_B3, minim);

  play(note_G3, quav);
  play(note_G3, quav);
  play(note_A3, crot);
  play(note_G3, crot);

  play(note_D4, crot);
  play(note_C4, minim);

  play(note_G3, quav);
  play(note_G3, quav);
  play(note_G4, crot);
  play(note_E4, crot);

  play(note_C4, crot);
  play(note_B3, crot);
  play(note_A3, crot);

  play(note_F4, quav);
  play(note_F4, quav);
  play(note_E4, crot);
  play(note_C4, crot);

  play(note_D4, crot);
  play(note_C4, minim);

  rest(crot);
}

void ditty_1() {// music with light effects
  set_tempo(default_tempo * 2); // lively pace

  play(note_C4, minim, light1);
  play(note_G3, crot, light2);
  play(note_G3, crot, light3);
  play(note_GS3, minim, light4);
  play(note_G3, minim, light5);
  rest(crot + quav);
  play(note_B3, minim, light6);
  play(note_C4, crot, light7);

  rest(crot);

  set_tempo(default_tempo); // reset tempo
}

void door_bell_1() {// illuminating door bell chime
  play(note_E4, minim, light1);
  play(note_C4, minim, light2);
  play(note_D4, minim, light3);
  play(note_G3, minim, light4);

  rest(minim);

  play(note_G3, minim, light4);
  play(note_D4, minim, light3);
  play(note_E4, minim, light2);
  play(note_C4, minim, light1);

  rest(crot);
}

void door_bell_2() {// basic bing/bong door chime
  set_tempo(default_tempo * 2); // lively pace

  play(note_E5, dot_minim, light1);
  play(note_C5, dot_minim, light2);

  rest(dot_minim);

  play(note_E5, dot_minim, light1);
  play(note_C5, dot_minim, light2);

  rest(crot);

  set_tempo(default_tempo);   // reset tempo
}

void ode_to_joy() {
  set_tempo(allegro);
  // 4/4 time
  //bar 1 
  play(note_B4, crot);
  play(note_B4, crot);
  play(note_C5, crot);
  play(note_D5, crot);
  //bar 2 
  play(note_D5, crot);
  play(note_C5, crot);
  play(note_B4, crot);
  play(note_A4, crot);
  //bar 3 
  play(note_G4, crot);
  play(note_G4, crot);
  play(note_A4, crot);
  play(note_B4, crot);
  //bar 4 
  play(note_B4, crot + quav);
  play(note_A4, quav);
  play(note_A4, minim);
  //bar 5 
  play(note_B4, crot);
  play(note_B4, crot);
  play(note_C5, crot);
  play(note_D5, crot);
  //bar 6 
  play(note_D5, crot);
  play(note_C5, crot);
  play(note_B4, crot);
  play(note_A4, crot);
  //bar 7 
  play(note_G4, crot);
  play(note_G4, crot);
  play(note_A4, crot);
  play(note_B4, crot);
  //bar 8 
  play(note_A4, crot + quav);
  play(note_G4, quav);
  play(note_G4, minim);
  //bar 9 
  play(note_A4, crot);
  play(note_A4, crot);
  play(note_B4, crot);
  play(note_G4, crot);
  //bar 10 
  play(note_A4, crot);
  play(note_B4, quav);
  play(note_C5, quav);
  play(note_B4, crot);
  play(note_G4, crot);
  //bar 11 
  play(note_A4, crot);
  play(note_B4, quav);
  play(note_C5, quav);
  play(note_B4, crot);
  play(note_A4, crot);
  //bar 12 
  play(note_G4, crot);
  play(note_A4, crot);
  play(note_D4, minim);
  //bar 13 
  play(note_B4, crot);
  play(note_B4, crot);
  play(note_C5, crot);
  play(note_D5, crot);
  //bar 14 
  play(note_D5, crot);
  play(note_C5, crot);
  play(note_B4, crot);
  play(note_A4, crot);
  //bar 15 
  play(note_G4, crot);
  play(note_G4, crot);
  play(note_A4, crot);
  play(note_B4, crot);
  //bar 16 
  play(note_A4, crot + quav);
  play(note_G4, quav);
  play(note_G4, minim);
}
