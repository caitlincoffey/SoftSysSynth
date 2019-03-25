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
#define LENGTH  256  // The length of the waveform lookup table
byte squarewave[LENGTH];   // Storage for the waveform
byte sinewave[LENGTH];// 255-36+1
byte triwave[LENGTH];
byte rampwave[255-36];
byte sawwave[LENGTH];

int buttonPin1 = 5;
int buttonPin2 = 4;
int buttonPin3 = 3;
int buttonPin4 = 2;
int buttonPin5 = 1;
int buttonPin6 = 0;

int soundCounter = 0;

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

  // Initialize square wave array to be 255(high) for half, and 0 for the other half
  for(int i = 0; i<LENGTH/2; i++){
      squarewave[i] = 255;
  }
  
  // Initalizing sine wave array, by scaling the sine wave to the appropriate period
  int offset = (high-low)/2;
  for (int i=0; i<LENGTH; i++) 
      {float v = OFFSET+(50*sin((PI2/LENGTH)*i));
      sinewave[i]=int(v);

   }

   // Initialize ramp wave array
   for (int i=low; i<high-low; i++) {
      rampwave[i]=i;
    }

//   Initialize triangle wave array
    for (int i=0; i<LENGTH; i++) {
      if (i<(LENGTH/2)) {
        triwave[i]=i*2;
      } else {
        triwave[i]=(LENGTH-1)-(i*2);
      }
    }

    // Saw wave
    for (int i=0; i<LENGTH; i++) {
      sawwave[LENGTH-1-i]=i;
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

void playSound(byte sounds[]){
  // sounds byte array: wave shape
    counter++;

    
    if (counter > high) {
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
    playSound(sinewave);
    
  }
  
  if (!button2) {
    playSound(triwave);
    
  }
  
  if (!button3) {
    playSound(sawwave);
    
  }
  if (!button4) {
    playSound(rampwave);
    
  }
  if (!button5) {
    playSound(squarewave);
    
  }
  if (!button6) {
    playSound(sinewave);
    
  }  
  else {
    return;
  }
  
}
