#include <Servo.h>

int pos;

Servo servo_2;
Servo servo_3;
Servo servo_4;
Servo servo_5;
Servo servo_6;
Servo servo_7;

void setup()
{
servo_2.attach(2);
servo_3.attach(3);
servo_4.attach(4);
servo_5.attach(5);
servo_6.attach(6);
servo_7.attach(7);
}

void loop()
{
for (pos = 0; pos <= 180; pos += 1) {
servo_2.write(pos);
servo_3.write(pos);
servo_4.write(pos);
servo_5.write(pos);
servo_6.write(pos);
servo_7.write(pos);

delay(15);
}

for (pos = 180; pos >= 0; pos -= 1) {
servo_2.write(pos);
servo_3.write(pos);
servo_4.write(pos);
servo_5.write(pos);
servo_6.write(pos);
servo_7.write(pos);
  
delay(15);
}
}
