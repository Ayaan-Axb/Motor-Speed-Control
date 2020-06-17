#include <Arduino.h>

int motorPin = 3;
char downArrow = KEY_DOWN_ARROW; 
char upArrow = KEY_UP_ARROW	;
void setup() 
{ 
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
  while (! Serial);
  Serial.println("Speed 0 to 255");
  Keyboard.begin();
} 
 
 
void loop() 
{ 
  // if (Serial.available())
  // {
    // int speed = 100;


    
    if (Keyboard.press(downArrow)){
    for(int speed = 0 ; speed <= 255; speed -=20) {
    analogWrite(motorPin, speed); 
    delay(30);      
   }
    }
    else if(Keyboard.press(upArrow)){
       for(int speed = 255 ; speed >= 0; speed +=20){
      analogWrite(motorPin, speed); 
      delay(30);      
 }
 }

    // }
  }