//
// Ron D Bentley, Stafford, UK, July 2021
//
// This example and code is in the public domain and
// may be used without restriction and without warranty.
//
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
// tone data and functions...
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

//
// tempos
//

#define  grave          40
#define  largo          46
#define  lento          52
#define  adagio         56
#define  larghetto      60
#define  adagietto      66
#define  andante        72
#define  andantino      80
#define  maestroso      88
#define  moderato      100
#define  allegretto    104
#define  animato       120
#define  allegro       132
#define  allegro_assai 144
#define  vivace        160
#define  presto        184
#define  prestissimo   208

//
// public constants - reflects the 'pitches.h' file, but latgely in lower case
//
#define note_B0  31
#define note_C1  33
#define note_CS1 35
#define note_D1  37
#define note_DS1 39
#define note_E1  41
#define note_F1  44
#define note_FS1 46
#define note_G1  49
#define note_GS1 52
#define note_A1  55
#define note_AS1 58
#define note_B1  62
#define note_C2  65
#define note_CS2 69
#define note_D2  73
#define note_DS2 78
#define note_E2  82
#define note_F2  87
#define note_FS2 93
#define note_G2  98
#define note_GS2 104
#define note_A2  110
#define note_AS2 117
#define note_B2  123
#define note_C3  131
#define note_CS3 139
#define note_D3  147
#define note_DS3 156
#define note_E3  165
#define note_F3  175
#define note_FS3 185
#define note_G3  196
#define note_GS3 208
#define note_A3  220
#define note_AS3 233
#define note_B3  247
#define note_C4  262 // <--------- middle C
#define note_CS4 277
#define note_D4  294
#define note_DS4 311
#define note_E4  330
#define note_F4  349
#define note_FS4 370
#define note_G4  392
#define note_GS4 415
#define note_A4  440
#define note_AS4 466
#define note_B4  494
#define note_C5  523
#define note_CS5 554
#define note_D5  587
#define note_DS5 622
#define note_E5  659
#define note_F5  698
#define note_FS5 740
#define note_G5  784
#define note_GS5 831
#define note_A5  880
#define note_AS5 932
#define note_B5  988
#define note_C6  1047
#define note_CS6 1109
#define note_D6  1175
#define note_DS6 1245
#define note_E6  1319
#define note_F6  1397
#define note_FS6 1480
#define note_G6  1568
#define note_GS6 1661
#define note_A6  1760
#define note_AS6 1865
#define note_B6  1976
#define note_C7  2093
#define note_CS7 2217
#define note_D7  2349
#define note_DS7 2489
#define note_E7  2637
#define note_F7  2794
#define note_FS7 2960
#define note_G7  3136
#define note_GS7 3322
#define note_A7  3520
#define note_AS7 3729
#define note_B7  3951
#define note_C8  4186
#define note_CS8 4435
#define note_D8  4699
#define note_DS8 4978

// using pin 11 because it allows a speaker to be inserted into this pin and adjacent ground
// on UNO on board without any wiring. Note any polarity requirements of the speaker.
// alternatively (for better sound qulity) use an 8 ohm speaker.
#define speaker  11 // digital pin number

float default_tempo = float(animato); // default tempo - beats per minute

float timings[6];                     // holds timings for each defined note/rest duration

//
// standard note duration names
//
#define semib     timings[0] // 4 beats
#define dot_minim timings[1] // 3 beats
#define minim     timings[2] // 2 beats
#define crot      timings[3] // 1 beat
#define quav      timings[4] // 1/2 beat
#define semiq     timings[5] // 1/4 beat

//
// set tempo by adjusting durations of note durations
//
void set_tempo(float tempo) {
  float crotchet_duration;
  crotchet_duration = 60 / tempo;    // timing for 1 beat
  semib     = crotchet_duration * 4; // semibrieve, 4 beats
  dot_minim = crotchet_duration * 3; // dotted mimin, 3 beats
  minim     = crotchet_duration * 2; // minim, 2 beats
  crot      = crotchet_duration;     // crotchet, 1 beat
  quav      = crotchet_duration / 2; // quaver, 1/2 beat
  semiq     = crotchet_duration / 4; // semiquaver, 1/4 beat
}

//
// play given note for given duration.
// observe that this function is 'blocking', although the tone 
// function is 'non-blocking', ie control stays with the function
// until note has completed.
//
void play(int note, float duration) {
  tone(speaker, note, duration * 1000); // play the given note for the given duration
  wait(duration);                      // wait for note to complete
}

//
// play given note for given duration and illuminate given light (led).
// observe that this function is 'blocking', although the tone 
// function is 'non-blocking', ie control stays with the function
// until note has completed.
//
void play(int note, float duration, int light) {
  tone(speaker, note, duration * 1000); // play the given note for the given duration
  light_on(light);                     // switch on the given light
  wait(duration);                      // wait for note to complete
  light_off(light);                    // switch off the given light
}

//
// rest for given duration.
//
void rest(float duration) {
  noTone(speaker); // ensure no tone is currently playing
  wait(duration);  // wait for given rest to complete
}

void setup() {
  //
  // set up timer1 interrupt for 1000hz interrupts, ie for 1 millisecond interrupts.
  // this is used to process any defined flash function calls.
  //
  noInterrupts();
  TCCR1A = 0;     // set TCCR1A register to 0
  TCCR1B = 0;     // SET TCCR1B register to 0
  TCNT1  = 0;     // initialize counter to 0
  // set Compare Match Register (CMR) for 1msec (1khz) increments
  OCR1A = 249;    // OCR1A = (16,000,000)/(64*1,000)) - 1
  // turn on CTC mode
  TCCR1B |= (1 << WGM12);              // WGM12 = 3
  // Set CS11 bit for 64 prescaler
  TCCR1B |= (1 << CS11) | (1 << CS10); // CS11 = 1 and CS10 = 0
  // enable timer1 compare interrupt
  TIMSK1 |= (1 << OCIE1A);             // OCIE1A = 1
  interrupts();
  
  //
  // now set each defined light (led) output pin and
  // test prior to main loop processing - visual check
  //
  for (int light = 0; light < max_lights; light++) {
    pinMode(pins[light], OUTPUT);
    light_on(light + 1);
    wait(0.05);
    light_off(light + 1);
    wait(0.05);
  }
  
  //
  // finally set up tone requirements and default tempo
  //
  pinMode(speaker, OUTPUT);
  // set up note timings, base on the default unit beat time (default_tempo)
  set_tempo(default_tempo);
}
