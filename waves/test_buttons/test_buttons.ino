/*
  Adjust length

 Author: Diego Berny, Emma Pan, Manu Patil


 Input from Midi File: 
 - AMP (Volume)
 - LENGTH (Time signature?)
 - sounds[] array
 
 */
 
#define PI2     6.283185 // 2 * PI - saves calculating it later
#define AMP     60      // Multiplication factor for the sine wave = Volume
#define OFFSET  128      // Offset shifts wave to just positive values
#define LENGTH  1  // The length of the waveform lookup table

#define SPEED   10000 // Changes duration of note


int ledPin = 5;       // select the pin for the LED
int buttonPin1 = 5;
int buttonPin2 = 4;
int buttonPin3 = 3;
int buttonPin4 = 2;
int buttonPin5 = 1;
int buttonPin6 = 0;
// 10 = C5, but a little flat

// These are the sound arrays that determine what notes the buttons (pins 0-5) will play
float sounds1[] = {5};
float sounds2[] = {5}; // 5 = A in tuner
float sounds3[] = {3.6};
float sounds4[] = {3.8};
float sounds5[] = {4.0};
float sounds6[] = {4.2};
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

  pinMode(ledPin, OUTPUT);
  
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
}

void writeByte(int x) {
//  Actually writes the sound in binary
  int pin;
  
  for (pin=13; pin>=6; pin--) {
    digitalWrite(pin, x&1);
    x >>= 1;
  }
}

int low = 0;
int high = 255;
//low = 18, high = 36 for techno sound
int counter = low;

float sincount = 0;


void playSound(float sounds[], int amp){
//  soundCounter: iterates through array of notes (sounds)
//  sincount: position in sine wave 
//  count: steps through sine wave
//  SPEED: affects how long it will spend playing each note
//  high/low: affect bounds of sound pitch

    soundCounter++;
    sincount = (amp * sin((PI2/sounds[soundCounter/SPEED])*counter));  // Calculate current entry
    sincount = int(sincount+OFFSET);
    counter++;
    if (counter > high) {
    counter = low;
    }
//  Reset the counter
    if (soundCounter > SPEED*LENGTH) {
      soundCounter = 0;
    }
    // write to the digital pins  
    writeByte(sincount);
}



void loop() {
  int button1 = digitalRead(buttonPin1);
  int button2 = digitalRead(buttonPin2);
  int button3 = digitalRead(buttonPin3);
  int button4 = digitalRead(buttonPin4);
  int button5 = digitalRead(buttonPin5);
  int button6 = digitalRead(buttonPin6); //Take 4.78 nanoseconds
  int volume = 100;
  
  
  if (!button1){
    volume = analogRead(A0)/4; //Takes 100 nanoseconds
    // Serial.println(volume);
    playSound(sounds1, volume);
    
  }
  
  if (!button2) {
    playSound(sounds2, volume);
    
  }
  
  if (!button3) {
    playSound(sounds3, volume);
    
  }
  if (!button4) {
    playSound(sounds4, volume);
    
  }
  if (!button5) {
    playSound(sounds5, volume);
    
  }
  if (!button6) {
    playSound(sounds6, volume);
    
  }  
  else {
    return;
  }
  
}
