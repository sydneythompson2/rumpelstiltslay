/a
AET rumpelstiltskin
rumpelstiltslay
team members: sydney thompson & casey dutton
description: button and servo program

a/

//servo code library
#include<Servo.h>;

//variables

Servo myServo;
const int buttonPin = 7;

void setup() {
  // put your setup code here, to run once:
myServo.attach(9);
pinMode(buttonPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

}
