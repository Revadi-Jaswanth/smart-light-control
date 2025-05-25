/*
 Task 1: Smart Light Control (Arduino + HC-05 Bluetooth)
 Controls an LED via Bluetooth commands '1' (ON) and '0' (OFF).
*/
char data = 0;
const int LED_PIN = 13;  // onboard LED

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);    // HC-05 default baud
}

void loop() {
  if (Serial.available()) {
    data = Serial.read();
    if (data == '1')
      digitalWrite(LED_PIN, HIGH);  // turn LED on
    else if (data == '0')
      digitalWrite(LED_PIN, LOW);   // turn LED off
  }
}
// App side: send '1' or '0' via Bluetooth on button presses.
