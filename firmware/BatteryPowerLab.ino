const int analogPin = A0;

void setup() {
    serial.begin(9600);
}

void loop() {
    int raw = analogRead(analogPin);
    Serial.println(raw);
    delay(1000);

}