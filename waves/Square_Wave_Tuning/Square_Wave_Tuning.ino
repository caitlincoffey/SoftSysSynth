/*
  Adjust length

 Author: Diego Berny, Emma Pan, Manu Patil


 Input from Midi File: 
 - AMP (Volume)
 - LENGTH (Time signature?)
 - sounds[] array
 
 */

 //Constants
#define PI2     6.283185 // 2 * PI - saves calculating it later
#define AMP     128      // Multiplication factor for the sine wave = Volume
#define OFFSET  128      // Offset shifts wave to just positive values


// Voltage Cutoff below this. 
  int low = 36;
  int high = 255;
  int counter = low;

/******** Lookup table ********/
#define LENGTH1  240  // The length of the waveform lookup table
#define LENGTH2  120  // The length of the waveform lookup table
#define LENGTH3  60  // The length of the waveform lookup table
#define LENGTH4  239  // The length of the waveform lookup table
#define LENGTH5  238  // The length of the waveform lookup table
#define LENGTH6  237  // The length of the waveform lookup table
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

  
  
  if (!button1){ playSound(squarewave1, LENGTH1);}
  
  if (!button2) {playSound(squarewave2, LENGTH2);}
  
  if (!button3) {playSound(squarewave3, LENGTH3);}
  
  if (!button4) {playSound(squarewave4, LENGTH4);}
  
  if (!button5) {playSound(squarewave5, LENGTH5);}
  
  if (!button6) {playSound(squarewave6, LENGTH6);}
    
  else {
    return;
  }
  
}
