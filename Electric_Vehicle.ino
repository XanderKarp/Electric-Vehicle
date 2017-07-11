#include <Servo.h>

const double DISTANCE = 1.0; // distance in meters, must have decimal

Servo servo_right;

bool is_down;

double run_time;

void setup() {
  servo_right.attach(9);
  Serial.begin(9600);

  pinMode(2, INPUT);
  digitalWrite(2, HIGH);
}

  void loop() {
    is_down = digitalRead(2);
    Serial.println(is_down);
    if (is_down == 0) {
      run_time = 586.217 * (DISTANCE) + 496.566;
      Serial.println(run_time);
      servo_right.write(127); // SPEED UP
      delay(run_time);
      }
    else {
      servo_right.write(0);
    }
}
