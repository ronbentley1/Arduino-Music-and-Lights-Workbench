//
// Ron D Bentley, Stafford, UK, July 2021
//
// This example and code is in the public domain and
// may be used without restriction and without warranty.
//
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// %              Example 'shrink-wrapped' music commands                  %
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

void middle_C() {
  // C major scale - up
  play(note_C3, crot);
  play(note_D3, crot);
  play(note_E3, crot);
  play(note_F3, crot);
  play(note_G3, crot);
  play(note_A3, crot);
  play(note_B3, crot);
  play(note_C4, crot);
  rest(crot);
  // C major scale - down
  play(note_C4, crot);
  play(note_B3, crot);
  play(note_A3, crot);
  play(note_G3, crot);
  play(note_F3, crot);
  play(note_E3, crot);
  play(note_D3, crot);
  play(note_C3, crot);
  rest(crot);
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

  //bar 1 - B B C' D'
  play(note_B3, crot);
  play(note_B3, crot);
  play(note_C4, crot);
  play(note_D4, crot);
  //bar 2 - D' C' B A
  play(note_D4, crot);
  play(note_C4, crot);
  play(note_B3, crot);
  play(note_A3, crot);
  //bar 3 - G G A B
  play(note_G3, crot);
  play(note_G3, crot);
  play(note_A3, crot);
  play(note_B3, crot);
  //bar 4 - B. AQ AM
  play(note_B3, crot + quav); 
  play(note_A3, quav);
  play(note_A3, minim);
  //bar 5 - B B C' D'
  play(note_B3, crot);
  play(note_B3, crot);
  play(note_C4, crot);
  play(note_D4, crot);
  //bar 6 - D' C' B A
  play(note_D4, crot);
  play(note_C4, crot);
  play(note_B3, crot);
  play(note_A3, crot);
  //bar 7 - G G A B
  play(note_G3, crot);
  play(note_G3, crot);
  play(note_A3, crot);
  play(note_B3, crot);
  //bar 8 - A. GQ GM
  play(note_A3, crot + quav);
  play(note_G3, quav);
  play(note_G3, minim);
  //
  //bar 9 - A A B G
  play(note_A3, crot);
  play(note_A3, crot);
  play(note_B3, crot);
  play(note_G3, crot);
  //bar 10 - A BQ C'Q B G
  play(note_A3, crot);
  play(note_B3, quav);
  play(note_C4, quav);
  play(note_B3, crot);
  play(note_G3, crot);
  //bar 11 - A BQ C'Q B A
  play(note_A3, crot);
  play(note_B3, quav);
  play(note_C4, quav);
  play(note_B3, crot);
  play(note_A3, crot);
  //bar 12 - G A DM
  play(note_G3, crot);
  play(note_A3, crot);
  play(note_D3, minim);
  //
  //bar 13 - B B C' D'
  play(note_B3, crot);
  play(note_B3, crot);
  play(note_C4, crot);
  play(note_D4, crot);
  //bar 14 - D' C' B A
  play(note_D4, crot);
  play(note_C4, crot);
  play(note_B3, crot);
  play(note_A3, crot);
  //bar 15 - G G A B
  play(note_G3, crot);
  play(note_G3, crot);
  play(note_A3, crot);
  play(note_B3, crot);
  //bar 16 - A. GQ GM
  play(note_A3, crot + quav);
  play(note_G3, quav);
  play(note_G3, minim);
  rest(minim);
}
