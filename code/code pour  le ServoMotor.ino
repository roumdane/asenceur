


#include <Servo.h>

/*
 Controlling a²
- brown cable to GND
- Red Cable to V_bus (5V from USB)
- Orange to A2
 
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

void setup() {
myservo.attach(A2);
}

void loop() {
 




    int i=90;
  myservo.write(i);                  // sets the servo position according to the scaled value
  delay(3000);
     i=75;
    myservo.write(i);

    delay(3000);
     
     i=90;
    myservo.write(i);
    
    delay(3000);
}

 