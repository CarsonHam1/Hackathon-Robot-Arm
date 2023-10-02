//Include the Servo Library
#include <Servo.h>
//Declare what pins the servos correspond to
int servoPin1 = 5; //Left side arm servo
int servoPin2 = 6; //Right side arm servo
int servoPin3 = 10; //Base servo
int servoPin4 = 11; //Gripper servo

Servo Servo1; // create servo object to control a servo... Twelve servo objects can be created on most boards
Servo Servo2; 
Servo Servo3;
Servo Servo4;


void setup() {
  //The setup code only runs once
  Servo1.attach(servoPin1); //Attaches the servo on  pin 5 to the servo object
  Servo2.attach(servoPin2); //Attaching the servo to the servo object is how the board recognizes that it is controlling a servo
  Servo3.attach(servoPin3);
  Servo4.attach(servoPin4);
  Serial.begin(9600); //Serial.begin(9600) sets up how fast the board sends data. 9600 is the most common choice

}

void loop() {
  //The loop section is the main body of code, where it runs repeatedly
/* The below code is sample code that should move the right hand servo from 0 degrees to 180 degrees
  NOTE: If the servo fails, it may not be able to reach that angle. Try changing the degrees to something else, like 0 to 40 and 180 to 160
  There will be trial and error for each servo, so make sure to find the correct bounds and angles to what works
 */
 Servo2.write(0); //Writes a value of 0 to the servo, meaning it attempts to rotate to 0 degrees
 delay(2000); //Waits for 2000 milliseconds, or 2 seconds

 Servo2.write(180); //Writes a value of 180 to the servo, meaning it attempts to rotate to 180 degrees
 delay(2000); //Waits for 2000 milliseconds, or 2 seconds

}
