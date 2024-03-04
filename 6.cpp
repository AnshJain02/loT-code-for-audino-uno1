// 4-bit counter:

// Define the array of LED pins
const int ledPins[] = {2, 3, 4, 5};
// Calculate the number of LEDs based on the size of the array
const int numLEDs = sizeof(ledPins) / sizeof(ledPins[0]);

void setup() {
  // Set each LED pin as an output
  for (int i = 0; i < numLEDs; i++) {
    pinMode(ledPins[i], OUTPUT);
  }
}

void loop() {
  // Loop through each count from 0 to 15
  for (int count = 0; count < 16; count++) {
    // Loop through each LED pin
    for (int i = 0; i < numLEDs; i++) {
      // Set the state of the current LED based on the corresponding bit in the count
      digitalWrite(ledPins[i], bitRead(count, i));
    }
    // Delay for 1 second
    delay(1000);
  }
}
