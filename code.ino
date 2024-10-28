// Define pin numbers
const int pirPin = 2;    // PIR sensor output pin
const int ledPin = 7;   // LED pin

void setup() {
  // Initialize the PIR sensor pin as an input
  pinMode(pirPin, INPUT);
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
  // Start the serial communication for debugging (optional)
  Serial.begin(9600);
}

void loop() {
  // Read the PIR sensor value
  int motionDetected = digitalRead(pirPin);
  
  if (motionDetected == HIGH) {
    // Motion detected
    digitalWrite(ledPin, HIGH); // Turn the LED on
    Serial.println("Motion detected! LED ON");
  } else {
    // No motion detected
    digitalWrite(ledPin, LOW); // Turn the LED off
    Serial.println("No motion. LED OFF");
  }
  
  // Small delay to avoid rapid toggling
  delay(100);
}
