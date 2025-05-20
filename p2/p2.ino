#include <Servo.h>
const int buttonPin = 5;
Servo myservo;  // create Servo object to control a servo



void setup() {
  myservo.attach(9);
  pinMode(5, INPUT);
  Serial.begin(9600);
}

void loop() { 

  Serial.println(digitalRead(5)); 
  if (digitalRead(5) == LOW) {
    delay(1000);
    myservo.write(180);  // tell servo to go to position in variable 'pos'

  } else {
    delay(1000);
    myservo.write(0);
  }
}

/*void loop() {
  if (digitalread(2) == HIGH) {
    randomSeed(millis()); 
    byte randNum = random(1 ,10); 

  }
}


void random1() {
  

}

void random2() {


}

void random2() {


}*/





























