#define servo_pin 7


// just a simple sweeping motion for the servo as a test...
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(servo_pin, OUTPUT);
  analogWrite(servo_pin, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0; i<255; i++) {
    analogWrite(servo_pin, i);
    Serial.println(i);
    delay(10);
  }
  for (int i=255; i>0; i--) {
    analogWrite(servo_pin, i);
    Serial.println(i);
    delay(10);
  }
}
