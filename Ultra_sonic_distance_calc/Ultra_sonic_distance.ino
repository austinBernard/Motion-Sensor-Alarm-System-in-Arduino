#include <LiquidCrystal.h> // includes the LiquidCrystal Library 
#include <Keypad.h>
#include <NewPing.h>

#define trigPin 9
#define echoPin 10
#defin MAX_DISTANCE 400

NewPing sonar (trigPin, echoPin, MAX_DISTANCE)


float duration, distance;



void setup() {

 // pinMode(trigPen, OUTPUT);
 // pinMode(echoPin, INPUT);
  Serial.begin(9600);

}

void loop() {

  duration = sonar.ping();

  distance = (duration / 2) * 0.0343; //343 meters per second is the speed of sound

   Serial.print("Distance: ");
  if (distance >= 400 || distance <= 2) {
    Serial.println("Out of range");
  }
  else {
    Serial.print(distance);
    Serial.println(" cm");
    delay(500)
  }
  delay(500);
  }


  
