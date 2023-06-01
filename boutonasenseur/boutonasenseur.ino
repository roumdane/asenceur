


#include <Servo.h>

/*
 Controlling a²
- brown cable to GND
- Red Cable to V_bus (5V from USB)
- Orange to A2
 
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo

int b1;
int b2;
int b3;

int Pact;
int et[] ={0,2840/*,2240*/};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8,INPUT);
  
  pinMode(7,INPUT);
  pinMode(9,INPUT);
  myservo.attach(A2);


  Pact = 1;


}

void loop() {
  // put your main code here, to run repeatedly:
  b1=digitalRead(8);
  b2=digitalRead(7);
  b3=digitalRead(9);

  
  if (b1==HIGH) fonction(1) ;
  if (b2==HIGH) fonction(2) ;
  if (b3==HIGH) fonction(3) ;

  


}
int fonction(int d){
  if(Pact != d){
    Serial.print("En marche depuis l'étage : ");
    Serial.print(Pact);
    Serial.print("vere l'étage : ");
    Serial.println(d);
  }

    if(Pact < d ){
     


    Serial.print("Arrivé a l'étage : ");
    Serial.print(d);
    Pact=d;
    

  }else{
    Serial.print ("Déjà arrivé à l'étage : ");
    Serial.print(d);
    delay(500);
  }
}
