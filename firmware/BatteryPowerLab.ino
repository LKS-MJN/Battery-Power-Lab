void loop() {
  int raw = analogRead(analogPin);
  float vRef = 5.0;                    // Arduino reference voltage
  float vPin = (raw / 1023.0) * vRef;  // voltage at A0

  const float R1 = 1000.0;             // ohms
  const float R2 = 220.0;              // ohms
  float vBat = vPin * (R1 + R2) / R2;  // estimated battery voltage

  Serial.print("Raw: ");
  Serial.print(raw);
  Serial.print("  Vpin: ");
  Serial.print(vPin, 3);
  Serial.print(" V  Vbat: ");
  Serial.print(vBat, 3);
  Serial.println(" V");

  delay(1000);
}