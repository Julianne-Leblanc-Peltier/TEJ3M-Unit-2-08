/* 
 * Created by Julianne Leblanc-Peltier
 * Created on April 2025
 * This program turns servo according to potentiometer
*/

# include <Servo.h>

const float ANALOG_PIN = 0;
float valOfAnalogPin;

Servo servoNumber1;

void setup(){
  servoNumber1.attach(3);
}

void loop(){
  valOfAnalogPin;
  valOfAnalogPin = analogRead(ANALOG_PIN);
  valOfAnalogPin = valOfAnalogPin / 6;
  servoNumber1.write(valOfAnalogPin);    
}
