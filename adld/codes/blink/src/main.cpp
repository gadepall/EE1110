//Code released under GNU GPL.  Free to use for anything.
//Remove the following  line if you are using the Arduino IDE
#include "Arduino.h"

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(13, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {

// turn the LED on (HIGH is the voltage level)
  digitalWrite(13, 1);   
// wait for a second
  delay(1000);              
// turn the LED off by making the voltage LOW
  digitalWrite(13, 0);    
// wait for a second
  delay(1000);              
}
