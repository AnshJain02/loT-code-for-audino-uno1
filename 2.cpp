const int ledPins[] = {2, 3, 4, 5, 6};
const int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);
const int switchPin1 = 7;
const int switchPin2 = 8;

void setup() {
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
  pinMode(switchPin1, INPUT_PULLUP);
  pinMode(switchPin2, INPUT_PULLUP);
}

void loop() {
  if (digitalRead(switchPin1) == LOW) {
    for (int i = 0; i < numLEDs; i++) {
      digitalWrite(ledPins[i], HIGH);
      delay(100);
      digitalWrite(ledPins[i], LOW);
    }
  }
  if (digitalRead(switchPin2) == LOW) {
    for (int i = numLEDs - 1; i >= 0; i--) {
      digitalWrite(ledPins[i], HIGH);
      delay(100);
      digitalWrite(ledPins[i], LOW);
    }
  }
}
