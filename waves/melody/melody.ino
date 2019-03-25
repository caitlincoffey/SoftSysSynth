/*
  

 Author: Allen Downey 
 
 Based on http://arduino.cc/en/Tutorial/AnalogInput
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe

 License: Public Domain
 
 */
 
 
int ledPin = 5;       // select the pin for the LED
int buttonPin1 = 5;
int buttonPin2 = 4;

#define PI2     6.283185 // 2 * PI - saves calculating it later
#define AMP     127      // Multiplication factor for the sine wave
#define OFFSET  128      // Offset shifts wave to just positive values


#define STRIDE 2000



/******** Lookup table ********/
// x will determine the octave of the note
#define C( x )        (  240 - x*121 ) 
#define C_SHARP( x )  (  226 - x*113 ) 
#define D_FLAT( x )   (  226 - x*113 ) 
#define D( x )        (  213 - x*107 ) 
#define D_SHARP( x )  (  202 - x*102 ) 
#define E_FLAT( x )   (  202 - x*102 ) 
#define E( x )        (  190 - x*95 ) 
#define F1( x )        (  179 - x*90 ) 
#define F_SHARP( x )  (  169 - x*85 ) 
#define G_FLAT( x )   (  169 - x*84 ) 
#define G( x )        (  160 - x*81 ) 
#define G_SHARP( x )  (  151 - x*76 ) 
#define A_FLAT( x )   (  151 - x*75 ) 
#define A( x )        (  142 - x*71 ) 
#define A_SHARP( x )  ( 134 - x*67 ) 
#define B_FLAT( x )   ( 134 - x*67 ) 
#define B( x )        ( 127 - x*64 ) 
#define R             (0)


int melody[] = {E(0),E(0),E(0),E(0), G(0),G(0),G(0), E(0),E(0), R, E(0), A(0),A(0), E(0),E(0), D(0),D(0),
                E(0),E(0),E(0),E(0), B(0),B(0),B(0), E(0),E(0), R, E(0), C_SHARP(1),C_SHARP(1), B(0),B(0), G(0),G(0),
                E(0),E(0), B(0),B(0), E(1),E(1), E(0), D(0), R, D(0), B(-1),B(-1), F_SHARP(0),F_SHARP(0), E(0),E(0),
                E(0),E(0),E(0),E(0),E(0),E(0),E(0),E(0), R,R,R,R,R,R,R,R};

void setup() {
  Serial.begin(9600);
  
  pinMode(buttonPin1, INPUT_PULLUP);  
  pinMode(buttonPin2, INPUT_PULLUP);  

  pinMode(ledPin, OUTPUT);
  
  pinMode(13, OUTPUT);  
  pinMode(12, OUTPUT);  
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT);  
  pinMode(9, OUTPUT);  
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);

  writeByte(36);
}

void writeByte(int x) {
  int pin;
  
  for (pin=13; pin>=6; pin--) {
    digitalWrite(pin, x&1);
    x >>= 1;
  }
}


int stride_counter = 0;
int wave_counter = 0;
int sound_counter = 0;
int val = 0;
int LENGTH = melody[0];

void loop() {
  int button1 = digitalRead(buttonPin1);
  int button2 = digitalRead(buttonPin2);

  if (!button1){
    // LENGTH is given by the array, melody[]. It determines the pitch
    // STRIDE tells us how long we're playing this wave before moving on to the next note.
    stride_counter ++;

    // change the note by changing LENGTH when STRIDE is reached
    if (stride_counter >= STRIDE){
      stride_counter = 0; // Reset the stride, change the note
      
      if(sound_counter >= 56){ //hardcoded length of melody
        sound_counter = 0;
      }
      else{
        sound_counter ++;
      }

      LENGTH = melody[sound_counter];
      wave_counter = 0;
    }

    // val is the voltage sent to writeByte()
    val = 255;

    // this counter keeps track of where we are in the given waveform 
    wave_counter ++;

    // Create the square wave: 1/2 of the LENGTH is high (255), and the other half is low (0).
    
    if (wave_counter > LENGTH/2) {
      val = 0;
    }
    if (wave_counter == LENGTH) {
      wave_counter = 0;
    }
    
    // write to the digital pins  
    writeByte(val);
  }
  
  if (!button2) {

  }
  else {
    return;
  }
  
  
  
}
