// Blink an LED in accordance with the brightness. Blinking frequency increases with increase in brightness:

// Define the LED pin
const int ledPin = 9;

void setup() {
  // Initialize serial communication at 9600 baud rate
  Serial.begin(9600);
  // Set the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Check if data is available on the serial port
  if (Serial.available() > 0) {
    // Read the brightness value from the serial monitor
    int brightness = Serial.parseInt();
    // Map the brightness value to the blinking interval
    int blinkInterval = map(brightness, 0, 100, 2000, 100); // Map 0-100% to 2000-100 ms
    // Turn on the LED
    digitalWrite(ledPin, HIGH);
    // Delay for the specified blinking interval
    delay(blinkInterval);
    // Turn off the LED
    digitalWrite(ledPin, LOW);
    // Delay for the specified blinking interval
    delay(blinkInterval);
    // Flush the serial input buffer
    Serial.flush();
  }
}
