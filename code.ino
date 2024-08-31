// Define pins for PIR sensor and LED
const int pirPin = 2;   // PIR sensor OUT pin
const int ledPin = 7;   // LED pin

void setup() {
  // Initialize the Serial Monitor
  Serial.begin(9600);
  // Set up the PIR sensor pin
  pinMode(pirPin, INPUT);
  // Set up the LED pin
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the PIR sensor output
  int motionDetected = digitalRead(pirPin);

  // If motion is detected, turn on the LED
  if (motionDetected == HIGH) {
    digitalWrite(ledPin, HIGH);  // Turn on LED
    Serial.println("Motion detected!");
  } else {
    digitalWrite(ledPin, LOW);   // Turn off LED
  }

  // Add a short delay before the next loop
  delay(200);
}
