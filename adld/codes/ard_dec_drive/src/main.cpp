//Code released under GNU GPL.  Free to use for anything.
//Remove the following two lines if you are using the Arduino IDE

#include "Arduino.h"


// the setup function runs once when you press reset or power the board
void setup() {
	//declaring output pins
    pinMode(2, OUTPUT);  
    pinMode(3, OUTPUT);
    pinMode(4, OUTPUT);
    pinMode(5, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  
   //Writing data to the output pins
  digitalWrite(2, 1); //LSB
  digitalWrite(3, 0); 
  digitalWrite(4, 1); 
  digitalWrite(5, 0); //MSB
}
