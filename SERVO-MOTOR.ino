#include <Servo.h>
int ServoPin = 12;

int GREEN = 4;
int YELLOW = 8;

Servo myServo;
void setup() {
  // put your setup code here, to run once:
 myServo.attach(12);
 pinMode (GREEN, OUTPUT);
 pinMode (YELLOW, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 myServo.write(0);
 digitalWrite(GREEN, HIGH);
 delay (1000);
 digitalWrite(GREEN, LOW);
 myServo.write(180);
 digitalWrite(YELLOW, HIGH);
 delay (1000);
 digitalWrite (YELLOW,LOW);
 
}