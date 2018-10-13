#include <Servo.h>
Servo myservo;
void setup() {
  myservo.attach(9);
}
void loop() {
  for (int i = 0; i < 3; ++i)
      myservo.write(i * 60);
}
