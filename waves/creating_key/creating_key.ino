/*
  Adjust length

 Author: Diego Berny, Emma Pan, Manu Patil


 Input from Midi File: 
 - AMP (Volume)
 - LENGTH (Time signature?)
 - sounds[] array
 
 */

 #include <stdio.h>
 #include <stdlib.h>

 //Constants
#define PI2     6.283185 // 2 * PI - saves calculating it later
#define AMP     128      // Multiplication factor for the sine wave = Volume
#define OFFSET  128      // Offset shifts wave to just positive values


// Voltage Cutoff below this. 
  int low = 36;
  int high = 255;
  int counter = low;

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


#define LENGTH1  A_SHARP(0)  // C3
#define LENGTH2  A_SHARP(1)  // C#3
#define LENGTH3  B(0)  // D3
#define LENGTH4  B(1)  // The length of the waveform lookup table
#define LENGTH5  G_SHARP(0)  // The length of the waveform lookup table
#define LENGTH6  G_SHARP(1)  // The length of the waveform lookup table

int melody[] = {A(0), B(0), C(1)};

byte squarewave1[LENGTH1];   // Storage for the waveform
byte squarewave2[LENGTH2];   // Storage for the waveform
byte squarewave3[LENGTH3];   // Storage for the waveform
byte squarewave4[LENGTH4];   // Storage for the waveform
byte squarewave5[LENGTH5];   // Storage for the waveform
byte squarewave6[LENGTH6];   // Storage for the waveform

int buttonPin1 = 5;
int buttonPin2 = 4;
int buttonPin3 = 3;
int buttonPin4 = 2;
int buttonPin5 = 1;
int buttonPin6 = 0;

void setup() {
  Serial.begin(9600);

// Very IMPORTANT to do this
  pinMode(buttonPin1, INPUT_PULLUP);  
  pinMode(buttonPin2, INPUT_PULLUP);
  pinMode(buttonPin3, INPUT_PULLUP);  
  pinMode(buttonPin4, INPUT_PULLUP); 
  pinMode(buttonPin5, INPUT_PULLUP); 
  pinMode(buttonPin6, INPUT_PULLUP); 
  
  pinMode(13, OUTPUT);  
  pinMode(12, OUTPUT);  
  pinMode(11, OUTPUT);  
  pinMode(10, OUTPUT);  
  pinMode(9, OUTPUT);  
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  
  pinMode(A0, INPUT);

  writeByte(36);

  buildSquareWave(squarewave1, LENGTH1); 
  buildSquareWave(squarewave2, LENGTH2); 
  buildSquareWave(squarewave3, LENGTH3); 
  buildSquareWave(squarewave4, LENGTH4); 
  buildSquareWave(squarewave5, LENGTH5); 
  buildSquareWave(squarewave6, LENGTH6); 
  

    
}

void buildSquareWave(byte array[], int len){
  
  // Initialize square wave array to be 255(high) for half, and 0 for the other half
  for(int i = 0; i<len/2; i++){
      array[i] = 255;
  }
  
}

void writeByte(byte x) {
//  Actually writes the sound in binary
  int pin;
  
  for (pin=13; pin>=6; pin--) {
    digitalWrite(pin, x&1);
    x >>= 1;
  }
}

void playSound(byte sounds[], int len){
  // sounds byte array: wave shape
    counter++;

    
    if (counter > len) {
    counter = 0;
    }

    // write to the digital pins  
    writeByte(sounds[counter]);
}



void loop() {
  int button1 = digitalRead(buttonPin1);
  int button2 = digitalRead(buttonPin2);
  int button3 = digitalRead(buttonPin3);
  int button4 = digitalRead(buttonPin4);
  int button5 = digitalRead(buttonPin5);
  int button6 = digitalRead(buttonPin6); //Take 4.78 nanoseconds

  
  
  if (!button1){ 
    for(int i = 0; i < 3; i++){
      int L = melody[i];
      byte squarewave1[L];
      buildSquareWave(squarewave1, L); 
      playSound(squarewave1, L);
      delay(50);
    }
      }
  
  if (!button2) {playSound(squarewave2, LENGTH2);}
  
  if (!button3) {playSound(squarewave3, LENGTH3);}
  
  if (!button4) {playSound(squarewave4, LENGTH4);}
  
  if (!button5) {playSound(squarewave5, LENGTH5);}
  
  if (!button6) {playSound(squarewave6, LENGTH6);}
    
  else {
    return;
  }
  
}
