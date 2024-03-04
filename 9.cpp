/ Lit an LED with brightness equal to 0%, 25%, 50%, 75%, 100% via serial monitor:

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
    // Set the LED brightness based on the received value
    switch (brightness) {
      case 0:
        analogWrite(ledPin, 0); // 0% brightness
        break;
      case 25:
        analogWrite(ledPin, 64); // 25% brightness
        break;
      case 50:
        analogWrite(ledPin, 128); // 50% brightness
        break;
      case 75:
        analogWrite(ledPin, 192); // 75% brightness
        break;
      case 100:
        analogWrite(ledPin, 255); // 100% brightness
        break;
      default:
        break;
    }
    // Flush the serial input buffer
    Serial.flush();
  }
}
