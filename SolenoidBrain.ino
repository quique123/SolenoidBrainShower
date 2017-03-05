int gatePin = 3;  // connection to mosfet gate
int ledPin = 13;
void setup() {
  pinMode(gatePin, OUTPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  delay(5000);
  // Open solenoid by sending voltage to pin3
  digitalWrite(ledPin,HIGH);
  digitalWrite(gatePin,HIGH);

  delay(5000);
  // Close solenoid by sending low
  digitalWrite(ledPin,LOW);
  digitalWrite(gatePin,LOW);
}
