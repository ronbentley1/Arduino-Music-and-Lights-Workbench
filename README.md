# Arduino-Music-and-Lights-Workbench
An educational workbench for introducing those new of computer programming to the subject, using fun and easy to use  commands for lighting LEDs and making music.

Ron D Bentley, Stafford, UK, July 2021
This example and code is in the public domain and
may be used without restriction and without warranty.

# Introduction
The Music and Lights Workbench (MLWB) has been designed to introduce anyone not familiar with or 
new to the subject of computer programming.  The approach taken is to provide a set of simple to use
and logically applied commands (functions) that link the computer to the outside world through the
playing musical notes and/or the lighting of LEDs.
The MLWB commands are largely independent of each other and may be used for playing just music, 
illuminating just LEDs (lights) or a combination of both. The MLWB does not require the use of
any programming functions, techniques or logic other than the simple statement of its commands.
Whilst, conditional constructs like if/then, do/while, etc, or for-loops , etc. can be used for
more advanced use under suitable teaching, they are not necessary to achieve immediate results
from the MLWB.
Anyone trying to get to grips with a new subject, here basic computer programming, benefits from
some direction by someone versed in the subject. The MLWB is no different and its use and application
is best achieved through guidance and mentoring from a someone taking the lead of tutor to the student.

# Motivation
The MLWB was designed for the author's grand children, to provide them with some opportunity to
understand how a computer program can be easily created to produce effects in the real world. 
It was hoped that through thinking about the logical steps needed to play simple music and/or 
turn lights (LEDs) on and off that this would peak and stimulate their desire to explore the potential
of programming more deeply.

# Prerequisites
- a target audience - the student, young or old, who has a willingness to explore how a computer program
  can do something quickly, easily and interesting,
- a supervisor - tutor, to act as educator - mentor and teacher of the MLWB.  
  The tutor should have some experience of Arduino and IDE and its programming, 
  but this can be at a rudimentary level,
  
- if the music element of the MLWB is to be explored/used then it is helpful for both tutor and student
  to have some musical knowledge, but, again, this can be at a rudimentary level,
- hardware configured as below,
- ARDUINO IDE installed on a Windows PC,
- ahead of use by the student, the tutor to gain thorough familiarisation with the MLWB through exploration
  of its commands and inbuilt examples. Download the crib sheet as a guide an aide memoir,
  
- and finally, a plan for what the tutor will introduce to the student, building from session to session.

# A Note About Terminology & Index Referencing
Youngsters and those new to doing anything computing related often find it difficult to understand computing
related terms and that referencing can start at 0. Therefore, the MLWB tries to avoid computing terms
wherever possible and support a students desire to reference from 1, not 0. For example, the first LED (0)
is referred to as light1, the second LED (1) as light2, etc.

# MLWB Commands
The MLWB command set falls largely into two groups - those performing musical instructions and those
performing actions with lights. However, there is one command that bridges both 'camps'. This is the
play command which is an overloaded function. It can be used either to:
  1. play a given note for a given duration, or
  2. as for 1. but with an additional parameter specifying a light number (LED) to be illuminated 
     whilst the note is playing. It is an overloaded function which can be used in either way.
     
# Music Commands
play      - will play the given note for the given duration. eg play(note_C4, minim), play(note_FS2, crot + quav), etc.
play      - an overloaded version of the command, this one allowing a light (LED) to be specified for illumination
            whist the given note is playing. eg play(note_C4, minim, light5), play(note_FS2, crot + quav, light1),
            etc.
rest      - rests for the given duration, during which time silence is maintained,. eg rest(quav), rest(0.5), etc.
set_tempo - sets the pace of a musical piece in beats per minute. eg set_tempo(allegro), set_tempo(144), etc.

# Light Commands
light_on       - turns on the given light (LED). eg light_on(light1), light_on(7), etc.
light_off      - turns off the given light (LED). eg light_off(light1), light_off(7), etc.
all_lights_on  - turns on all 8 lights. eg all_lights_on().
all_lights_off - turns off all 8 lights. eg all_lights_off().
flash_light    - flashes the given light for the given flash interval until redefined by another command.
                 eg flash_light(light3, 0.5), flash frequency is 1 second. This command is controlled by
                 the microcontroller's timer1, via an ISR. In this way, flash sequences will continue to
                 run even though other commands may be executed subsequent to a flash_light command. 
                 Flashing continues until another command is executed on the same light (LED).
strobe_all_lights
               - strobes all lights for the given number of cycles illuminating each light for the
                 given time.
wait           - waits for the given duration (seconds) halting any processing other than existing flash_light 
                 commands. eg wait(5.5), waits for 5.5 seconds.
                 
# Shrink-wrapped Examples
To kick things off, two tabs are included that provided examples for musical melodies/tunes and lighting sequences. 
Use these to see how each native command (function) can be used, individually and together. Indeed, these may
also be used as instructional guides between tutor and student.

# MLWB Layout
The MLWB software is written in Arduino C++ and comprises six tabs. The tabs are:
- music_and_lights_workbench - this tab provides an overview of the MLWB, and echoes much of this article.
- functions_lights - this tab defines the functions underpinning the MLWB commands dealing with LED control.
- functions_tones - this tab defines the functions underpinning the MLWB commands dealing with music/tone 
  control. Additionally, this tab also defines the setup() function.
- main_work_area - this is were a student's coding should be inserted and be the central focus for teaching, 
  exploring and consolidating ideas.
- xample_lights - the MLWB is provided out of the box (OOTB) with several readymade examples demonstrating
  the use of commands for controlling LEDs (lights). These can be used as instructional examples between tutor
  and student.
- xample_tunes - the MLWB is also provided OOTB with several other readymade examples demonstrating the use
  of commands for playing tones (music) on the attached speaker/buzzer. Again, these can be used as instructional
  examples between tutor and student.
  
# The Crib Sheet
The crib sheet documents all of the preset values and commands available for use by the MLWB. Download this 
as an aide memoir and ready reference.

# Finally
I feel I need to declare that my musical knowledge, skill and prowess is next to nil - I would think that a 
post box is musically more gifted!
My approach in all matters musical has been mechanistic with much use of the internet in constructing the 
musical elements of this workbench, so I apologise to anyone that may be affronted by inadequate terms or 
implementation. My defence is that it seems to work as I intended and my grand children seem to be quite happy, 
one of whom is more knowledgeable about music than I.

I hope you enjoy your experiences.
