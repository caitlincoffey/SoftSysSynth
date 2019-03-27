# Synth
### Team Members: Diego Berny, Emma Pan, Manu Patil

## Project Vision
For this project, we wanted to create a synthesizer. We started off with a rather unclear idea of how the synthesizer worked, and what it was capable of. After clearing our confusion, we hoped to program the synthesizer to play any song, given a midi file. In our excitement, we scoped the project to be more than was feasible in the time left. 

What we have produced is a synthesizer capable of producing several different waveforms, which have different sound textures. The machine can create a melody if it is programmed to play a predefined sequence of pitches.
It is connected to 6 buttons, and we are experimenting with having a different sound quality implemented by each button. We also have a slider that controls volume- another extension (if we have extra time) would be to give each button a slider for adjusting volume, or bending pitch. Ultimately, the result will be a synthesizer that allows you to mix whatever midi track you give it.  <br>

___

## Learning Goals
**Diego**: Become more proficient with C and learn how it interfaces with hardware <br>
**Emma**: Become more comfortable with C and learn how to make noises with an Arduino <br>
**Manu**: Learn more about about C through especially when it comes to Arduino programming. <br>

___

## Results

[Video of our synthesizer in action](https://img.youtube.com/vi/qqOoSs4LrUY&feature=youtu.be/0.jpg)

### Implementation
The circuit is set up to allow for different buttons to create unique sounds. We started by generating the waves that create our sounds at the start, so they can be accessed at any point throughout the process. For example, here you can see a simple implementation of a square wave in code.
```C
for(int i = 0; i<LENGTH/2; i++){
      squarewave[i] = 255;
  }
```
The wave is represented as an array of values. It gives the first half of the wave the max value, and the second half the minimum (0 by default). It creates a single period of the wave, which is simply repeated as needed when the button is held for a long time.

We played sounds by iterating through the values that make up the wave, and digitally sending those values to a series of pins on the Arduino. The value sent is directly correlated to an “effective voltage”, where the numbers sent in a range of 0-255 correspond to a voltage between 0-5V. Each pin outputs a single digit of the value (in binary); this is accomplished by only sending the last digit of the number to a pin and bit-shifting to the right by a single digit and sending the new last digit. 
```C
void writeByte(byte x) {
  int pin;
  for (pin=13; pin>=6; pin--) {
    digitalWrite(pin, x&1);
    x >>= 1;
  }
}
```

This process is repeated until all of the digits have been sent. The amplifier receives this byte of information, which in turn connects to the speaker that plays the sound.

### Melody

In order to program the synthesizer to play songs, we refactored our code into a cleaner format, using counters instead of arrays, in order to account for differences in length. The length of a waveform (frequency) is what changes pitch in our code. Drawing from pre-generated arrays would mean creating an array for each pitch, which would have been unnecessarily complicated. <br>

Instead, we have one key of global variables that maps pitches with wave lengths. Each variable is like a function, including a formula for translating the note to different octaves. We obtained the note values by looking at [this](https://cdn.makezine.com/make/35/OCR2A-frequency-table.pdf) table, and then adjusting the values to suit our setup, by checking the resulting pitches against a pitch tuner. The code for this key is shown [here](https://github.com/mpatil99/SoftSysSynth/blob/9a47ebb94ed77027e66ba13f04f8292b5d4fa8f4/waves/melody/melody.ino#L28).<br>


Our code creates a melody uses 3 counters:

+ wave_counter updates the waveform values during the main loop, to create the square wave shape. 
+ stride_counter keeps track of note length (STRIDE), so that all notes are the same length, despite having different wave lengths. 
+ sound_counter keeps track of what note to play, by indexing into an array of wave lengths, which will result in different frequencies, and thus, pitches. 

The code for this section can be found [here](https://github.com/mpatil99/SoftSysSynth/blob/master/waves/melody/melody.ino). <br>

Below is an image of the melody being played, with the Crazy Frog song: 

![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/Crazy%20Frog.JPG "Crazy Frog Melody")


### Hardware Changes

We added 4 additional buttons to be able to toggle through additional different features. We added in a sliding potentiometer to control volume. However, for the final iteration we decided to remove it as there was a noticeable effect on the pitch. This was caused by the fact that the Arduino AnalogRead() functions takes nearly 20 times as long to execute as the DigitalRead() function.

### Generating Different Waves

One of our goals was to explore different waveforms. We looked at the waves that were being generated by the our initial code. 

![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/SineOne.JPG "Initial Sine Wave")

It was not ideal. 
We decided to figure out a method to clean up our sine wave before proceeding to other waveforms. We decided to try pre-generate our waves. This approach resulted in far more palatable waves.

![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/SineInitial.JPG "First Pre-generated Sine Wave")

This was already clearer than what we had previously generated. After a couple more iterations ...

![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/ConfusedSine.JPG "Iteration of Sine Wave")
![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/Sine3.JPG "Iteration of Sine Wave")

… we were able to generate a clear sine wave.

![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/SineFinal.JPG "Final Sine Wave")

For a future project, this wave could be further cleaned up by use of a hardware or software low-pass filter.
After these waves, we created several other waveforms.

![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/SawInitial.JPG "Saw Wave")
![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/RampInitial.JPG "Ramp Wave")
![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/SquareInitial.JPG "Square Wave")
![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/TriangleInitial.JPG "Triangle Wave")

While there were some cut-off issues in some of the waveforms, we found that these were due to hardware limitations and addressed these before moving on. 
We found that the cleanest waveform was the square wave. We decided to proceed to our next goal of creating a song using the square waveforms. <br>

The code for this section can be found [here](https://github.com/mpatil99/SoftSysSynth/blob/master/waves/new_waves/new_waves.ino).

## Accomplishments

We were able to create different effects depending on what button was pressed on the circuit! Separately, we were able to adjust volume with a slider, and play a melody using square waves!

### Buttons

With the starter code taken from the project description (in the resources section), the logic was set up in a way such that if a button is not pressed, it would hit a return statement to avoid making any sound. This structure makes it complicated to add functionality for more buttons, because if any of them are not triggered, it never reaches the section that makes sound. In order to get around this we flipped the logic, to where it only accesses the running sound code when the code for that button is pressed. 

### Volume Potentiometer

Using a potentiometer and the built in analogRead() function, we were able to control the volume of the output. The output of the potentiometer was used to scale the sine wave being generated. One interesting flaw with this system was that using the analogRead function changed the pitch of the output. This was caused by the fact the digitalRead() takes approximately 4 nanoseconds, while analogRead() takes 100 nanoseconds. Below is the sound wave generated by adjusting the volume: 

![alt text](https://github.com/mpatil99/SoftSysSynth/blob/master/Volume.JPG "Volume being adjusted live")

## Reflection

We managed to reach our Minimal Viable product and further reach most our stretch goal as well. One of the larger challenges we faced coming into this project was not having any idea of what the project would take the shape of. Had we started with a a clearer picture of where we wanted to go we may have been able to produce a higher level end product. However, the benefit of having a slightly more vague idea of our end goal allowed for and encouraged far more exploration. The group's goals were pretty effectively met in this process.  Overall, we learned a lot about producing sounds and songs at a very low level. 

## Future plans: 

In the future, we would want to be able to convert any song into the array of notes format given to our code- this could be done by running a python script on midi files to generate the array. Additionally, we would want to code each button to continue playing the same song, with different waveforms, and include a slider for the volume, that would change the amplitude of the sound wave. In order to implement the volume change, we would have to read from the arduino during the main loop, and that would change the pitch. We'd have to refactor the way the wave is created, or introduce threading, or timers, to make this work.

## Resources

Arduino sound synthesis: using Arduino to generate an audible waveform, and manipulate it in real time.

+ [Old Synth Project Description](https://sites.google.com/site/softwaresystems2015/backlog/projects)

+ [ Allen Downey’s Blog which discusses building the hardware for the project](https://thinkdsp.blogspot.com/2014/02/build-softsyssynth.html)

+ [Resistor ladder reference sheet](https://www.digikey.com/product-detail/en/bourns-inc/4310R-R2R-103LF/4310R-R2R-103LF-ND/3741102)

+ [Arduino Reference Sheet](https://www.arduino.cc/reference/en/)

+ [Arduino Audio Output, Instructables](https://www.instructables.com/id/Arduino-Audio-Output/)

+ [Article on Arduino Sound Synthesis](https://makezine.com/projects/make-35/advanced-arduino-sound-synthesis/)


Arduino and other assorted components from the man himself, Allen Downey. 
