/*
  Adjust length

 Author: Allen Downey 
 
 Based on http://arduino.cc/en/Tutorial/AnalogInput
 Created by David Cuartielles
 modified 30 Aug 2011
 By Tom Igoe

 License: Public Domain
 
 */
 
 
int ledPin = 5;       // select the pin for the LED
int buttonPin1 = 2;
int buttonPin2 = 3;

#define PI2     6.283185 // 2 * PI - saves calculating it later
#define AMP     127      // Multiplication factor for the sine wave
#define OFFSET  128      // Offset shifts wave to just positive values
#define LENGTH  8  // The length of the waveform lookup table

void setup() {
//  Serial.begin(9600);
  
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
int stride = 1;
int counter = low;

float sincount = 0;

void loop() {
  int button1 = digitalRead(buttonPin1);
//  Serial.println(button1);
  int button2 = digitalRead(buttonPin2);

  
  if (!button2) {
    
//    stride = 5;
//    counter += stride;
    sincount = (AMP*sin((PI2/LENGTH)*counter));  // Calculate current entry
    sincount = int(sincount+OFFSET);
//    Serial.println(counter);
    counter++;
    if (counter > high) {
    counter = low;
   }

   

    // write to the digital pins  
    writeByte(sincount);

  }
  else {
    return;
  }
  
  
  
}
