#include <Servo.h>
 
Servo servo;
 
void setup() {
    servo.attach(D3);
    servo.write(0);
    Serial.begin(115200);
    Serial.println('xxx');
    delay(2000);
}
 
void loop() {
    servo.write(0);
    Serial.println('0');
    delay(1000);
    servo.write(90);
    Serial.println('180');
    delay(1000);
    servo.write(180);
    delay(1000);
    Serial.println('180');
}
