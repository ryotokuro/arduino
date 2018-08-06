void setup() {
  pinMode(13, OUTPUT); // setting pin 13 to OUTPUT voltage
}

void loop() {
  digitalWrite(13, HIGH);
  delay(1000); // delay arduino for 1 second
  digitalWrite(13, LOW);
  delay(1000); //
}
