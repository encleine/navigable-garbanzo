
#include <Servo.h>
Servo myservo;
int isPushed;
int push = 4;

void setup()
{
    pinMode(push, INPUT_PULLUP);
    myservo.attach(9);
}
void loop()
{
    isPushed = digitalRead(push);
    if (ispushed)
        myservo.write(90);
    else
        myservo.write(180);
    delay(150);
}