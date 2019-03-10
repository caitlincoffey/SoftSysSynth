# Synth
### Team Members: Diego Berny, Emma Pan, Manu Patil

## GOAL
Our team wishes to learn more about how C interacts with hardware using arduino microcontrollers. <br><br>
**Lower Bound**: “Make a sound”. We were able to reach this goal quite easily. This goal was a result of having very little understanding of how a synthesizer could even be made using an arduino and C
 <br><br>
**Upper Bound**: Play a Song. We are now aiming to convert from Midi file to CSV to sound from our buzzer. Our buzzer is connected to 6 buttons, and we are experimenting with having a different sound quality implemented by each button. We also have a slider that controls volume- another extension (if we have extra time) would be to give each button a slider for adjusting volume, or bending pitch. Ultimately, the result will be a synthesizer that allows you to mix whatever midi track you give it.  <br>

___

## Learning Goals
**Diego**: Become more proficient with C and learn how it interfaces with hardware <br>
**Emma**: Become more comfortale with C and learn how to make noises with an Arduino <br>
**Manu**: Learn more about about C through especially when it comes to Arduino programming. <br>

___

## What we have done so far
We started out with just figuring out how to make a sound come out of the speaker. Once we were able to do that, we moved on to implementing different sounds depending on what button is pressed on the circuit; this involved refactoring the code to allow for different buttons, and also understanding what is responsible for changing the tone that is produced by the speaker. We have been able to find help online fairly consistently, as there is plenty of documentation for similar projects for Arduino. <br>

___

## Tasks
We are currently working on cleaning up the sound coming from our buzzer. We plan to do some sort of filtering analysis. We are also working on playing CSV files through an array. Here are some of the tasks set up for the upcoming week: <br><br>
Manu : 
     - Figure out low pass filter to clean up signal
     - Learn about square waves, and create a method for them in our code

<br> Emma
     - Learn about protothreads, and experiment to see if that can be used to fix our pitch bending problem.
     - Learn about ramp waves, and create a method for them in our code
<br> Diego
     - Reading in csv files to arduino. Possibly with a header file and external variables.
     - Learn about triangle waves, and create a method for them in our code
<br> All
     - Clean up code in our repo

<br> A description of the original project can be found here:
http://thinkdsp.blogspot.com/2014/02/build-softsyssynth.html
