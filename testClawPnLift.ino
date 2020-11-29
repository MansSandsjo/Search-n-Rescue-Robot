#include <Servo.h>
  Servo lift;
  Servo claw;
  
void setup() {
  // put your setup code here, to run once:
pinMode(A5, INPUT_PULLUP);
Serial.begin(9600);
claw.attach(3);
lift.attach(2);
claw.write(0);


}

void loop() {
  // put your main code here, to run repeatedly:
int personSensor = analogRead(A5);
Serial.println(personSensor);

if(personSensor<=800)
{
  
  claw.write(45);
  delay(600);
  lift.write(0);
  delay(1000);
  claw.write(0);
  delay(1000);
  lift.write(90);

  }
}
