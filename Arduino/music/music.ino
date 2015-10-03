/**
 *music
 *Author: Andrew Feldman, 10/3/15
 *
 *Play a sequence of musical notes through a piezo buzzer
 *attached to a digital output.
 *
 *Notation:
 *-A,B,C,D,E,F,G: keys in the C-major scale
 *-a,b,d,e,g: Ab, Bb, Db, Eb, Gb (b=flat)
 *-c,f: Disallowed because Cb=B and Fb=E
 *-R: Rest
 */

const int length_of_song=1;
const int cycles_per_note=100;
const int natural_note_to_us[7];
const int flat_note_to_us[7];


char musical_notes[length_of_song]={'A'};
int us_per_cycle[length_of_song];

void setup()
{
  pinMode(12,OUTPUT);
  
  for (int i=0; i<length_of_song; i++)
  {
      
      us_per_cycle[i]=;
  }
  
} /* setup() */

void loop()
{
  
} /* loop() */
