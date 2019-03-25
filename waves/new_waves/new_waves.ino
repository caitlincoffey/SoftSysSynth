/*
  Adjust length

 Author: Diego Berny, Emma Pan, Manu Patil


 Input from Midi File: 
 - AMP (Volume)
 - LENGTH (Time signature?)
 - sounds[] array
 
 */
 
#define PI2     6.283185 // 2 * PI - saves calculating it later
#define AMP     128      // Multiplication factor for the sine wave = Volume
#define OFFSET  128      // Offset shifts wave to just positive values
//#define LENGTH / 1  // The length of the waveform lookup table

#define SPEED   10000 // Changes duration of note

/******** Lookup table ********/
#define LENGTH  256  // The length of the waveform lookup table
byte squarewave[LENGTH];   // Storage for the waveform
byte sinewave[LENGTH];
byte triwave[LENGTH];
byte rampwave[LENGTH];
byte sawwave[LENGTH];

int buttonPin1 = 5;
int buttonPin2 = 4;
int buttonPin3 = 3;
int buttonPin4 = 2;
int buttonPin5 = 1;
int buttonPin6 = 0;
// 10 = C5, but a little flat

// These are the sound arrays that determine what notes the buttons (pins 0-5) will play
float sounds1[] = {20};
float sounds2[] = {200}; // 5 = A in tuner
float sounds3[] = {2000};
float sounds4[] = {20};
float sounds5[] = {200};
float sounds6[] = {2000};
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
  for (int i=0; i<LENGTH; i++) 
      {float v = OFFSET+(AMP*sin((PI2/LENGTH)*i));
      sinewave[i]=int(v);
   }

   // Initialize ramp wave array
   for (int i=0; i<LENGTH; i++) {
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
    for (int i = LENGTH-1; i>0; i--) {
      sawwave[i]=i;
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
// Voltage Cutoff below this. 
int low = 36;
int high = 255;
int counter = low;

void playSound(byte sounds[], int amp){
//  soundCounter: iterates through array of notes (sounds)
//  sincount: position in sine wave 
//  count: steps through sine wave
//  SPEED: affects how long it will spend playing each note
//  high/low: affect bounds of sound pitch
//  increment: how many samples of the sin wave are taken

    counter++;

    
    if (counter > high) {
    counter = low;
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
  int volume = 128;
  
  
  if (!button1){
//    volume = analogRead(A0)/8; //Takes 100 nanoseconds
    playSound(sinewave, volume);
    
  }
  
  if (!button2) {
    playSound(triwave, volume);
    
  }
  
  if (!button3) {
    playSound(sawwave, volume);
    
  }
  if (!button4) {
    playSound(rampwave, volume);
    
  }
  if (!button5) {
    playSound(squarewave, volume);
    
  }
  if (!button6) {
    playSound(sinewave, volume);
    
  }  
  else {
    return;
  }
  
}
