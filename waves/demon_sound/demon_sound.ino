/*
  Adjust length

 Author: Allen Downey 
 
 Based on http://arduino.cc/en/Tutorial/AnalogInput
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe

 License: Public Domain


 Input from Midi File: 
 - AMP (Volume)
 - LENGTH (Time signature?)
 - sounds[] array
 
 */
 
 
int ledPin = 5;       // select the pin for the LED
int buttonPin1 = 4;
int buttonPin2 = 5;
int buttonPin3 = 3;
int buttonPin4 = 2;
int buttonPin5 = 1;
int buttonPin6 = 0;

#define PI2     6.283185 // 2 * PI - saves calculating it later
#define AMP     60      // Multiplication factor for the sine wave = Volume
#define OFFSET  128      // Offset shifts wave to just positive values
#define LENGTH  8  // The length of the waveform lookup table

#define SPEED   1

// 10 = C5, but a little flat

float sounds1[] = {10};
float sounds2[] = {20};
float sounds3[] = {30};
float sounds4[] = {20};
float sounds5[] = {30};
float sounds6[] = {30};
int soundCounter = 0;

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

int low = 36;
int high = 255;
//low = 18, high = 36 for techno sound
int counter = low;

float sincount = 0;


void playSound(float sounds[]){
    soundCounter++;
    sincount = (AMP*sin((PI2/sounds[soundCounter/SPEED])*counter));  // Calculate current entry
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
//  Serial.println(button1);
  int button2 = digitalRead(buttonPin2);
//  Serial.println(button2);

  int button3 = digitalRead(buttonPin3);
  int button4 = digitalRead(buttonPin4);
  int button5 = digitalRead(buttonPin5);
  int button6 = digitalRead(buttonPin6);
  
  if (!button1){
    playSound(sounds1);

  }
  
  if (!button2) {
    playSound(sounds2);
    
  }
  
  if (!button3) {
    playSound(sounds3);
    
  }
  if (!button4) {
    playSound(sounds4);
    
  }
  if (!button5) {
    playSound(sounds5);
    
  }
  if (!button6) {
    playSound(sounds6);
    
  }  
  else {
    return;
  }
  
}
