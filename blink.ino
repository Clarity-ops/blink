/*
  Blink
  Turns on an LED on for three second, then off for four seconds, repeatedly.
 
  This example code is in the public domain.
 */
 
// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int led = 13;

// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(led, OUTPUT);     
}

// the loop routine runs over and over again forever:
void loop() {
  static int delayTime = 2000; // start with 2000 milliseconds
  static bool increasing = true; // flag to determine whether to increase or decrease the delay

  digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(delayTime);          // wait for the current delay time
  digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
  delay(delayTime);          // wait for the current delay time

  // Update the delay time
  if (increasing) {
    delayTime += 100;
    if (delayTime >= 4000) {
      increasing = false; // start decreasing
    }
  } else {
    delayTime -= 100;
    if (delayTime <= 2000) {
      increasing = true; // start increasing
    }
  }
}