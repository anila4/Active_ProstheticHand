#include <Servo.h>

#define midServoPin 5
#define pinkieServoPin 9
#define ringServoPin 6
#define thumbindexServoPin 3

Servo Middle;
Servo Pinkie;
Servo Ring;
Servo ThumbIndex;


void setup() {
  Middle.attach(midServoPin);
  Pinkie.attach (pinkieServoPin);
  Ring.attach(ringServoPin);
  ThumbIndex.attach(thumbindexServoPin);
}

void loop() {

  Middle.write(180);
  Ring.write(180);
  Pinkie.write(180);
  ThumbIndex.write(90);

}
