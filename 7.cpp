// Blink an LED with two switches:

// Define the LED pin and switch pins
const int ledPin = 2;
const int switchPin1 = 7;
const int switchPin2 = 8;
// Initialize the blink interval
int blinkInterval = 1000;

void setup() {
  // Set the LED pin as an output and the switch pins as inputs with pull-up resistors
  pinMode(ledPin, OUTPUT);
  pinMode(switchPin1, INPUT_PULLUP);
  pinMode(switchPin2, INPUT_PULLUP);
}

void loop() {
  // Check if switchPin1 is pressed
  if (digitalRead(switchPin1) == LOW) {
    // Decrease the blink interval by half
    blinkInterval /= 2;
  }
  // Check if switchPin2 is pressed
  if (digitalRead(switchPin2) == LOW) {
    // Double the blink interval
    blinkInterval *= 2;
  }
  // Turn on the LED
  digitalWrite(ledPin, HIGH);
  // Delay for the specified blink interval
  delay(blinkInterval);
  // Turn off the LED
  digitalWrite(ledPin, LOW);
  // Delay for the specified blink interval
  delay(blinkInterval);
}
