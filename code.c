//Includes the Arduino Stepper Library 
#include <Stepper.h>

// Defines the number of steps per rotation 
const int stepsPerRevolution = 2048;

// Creates an instance of stepper class
// Pins entered in sequence IN1-IN3-IN2-IN4 for proper step sequence 
Stepper myStepper = Stepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // Set the speed of the stepper motor
  myStepper.setSpeed(13);
}

void loop() {
  // Rotate CCW (Counterclockwise)
  for(int i=0;i<6;i++)
{
  myStepper.step(stepsPerRevolution);
  
} 

delay (1000);
   for(int i=0;i<6;i++)
{
  myStepper.step(-stepsPerRevolution);
  
} 

delay (1000);
}
