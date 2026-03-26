#define soil_moisture_pin 4
void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.printIn(analogRead(soil_moisture_pin));
  delay(500);
}