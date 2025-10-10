// Define pins
const int pir1 = 2;
const int pir2 = 3;
const int pir3 = 4;
const int pir4 = 5;
const int ledPin = 13;

void setup() {
  pinMode(pir1, INPUT);
  pinMode(pir2, INPUT);
  pinMode(pir3, INPUT);
  pinMode(pir4, INPUT);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // LED off initially
}

void loop() {
  // Read PIR sensors
  bool motionDetected = digitalRead(pir1) == HIGH ||
                        digitalRead(pir2) == HIGH ||
                        digitalRead(pir3) == HIGH ||
                        digitalRead(pir4) == HIGH;

  if (motionDetected) {
    digitalWrite(ledPin, HIGH); // Turn LED on
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED off
  }
}
