// Define the array of LED pins
const int ledPins[] = {2, 3, 4, 5, 6};
// Calculate the number of LEDs based on the size of the array
const int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);
// Define the sensor pin
const int sensorPin = A0;

void setup() {
  // Set each LED pin as an output
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Read the analog value from the sensor
  int sensorValue = analogRead(sensorPin);
  // Map the sensor value to the number of LEDs to light up
  int numLitLEDs = map(sensorValue, 0, 1023, 0, numLEDs);

  // Loop through each LED pin
  for (int i = 0; i < numLEDs; i++) {
    // Check if the current LED should be lit based on the mapped sensor value
    if (i < numLitLEDs) {
      // Turn on the current LED
      digitalWrite(ledPins[i], HIGH);
    } else {
      // Turn off the current LED
      digitalWrite(ledPins[i], LOW);
    }
  }
}