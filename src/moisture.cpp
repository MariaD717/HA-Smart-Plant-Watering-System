#include <Arduino.h>

#define soil_moisture_pin 10

void setup() {
  Serial.begin(9600);
}

void loop() {
  int soil_moisture_value = analogRead(soil_moisture_pin);
  Serial.print("Soil Moisture Value: ");
  Serial.println(soil_moisture_value);
  delay(1000); // Delay for a second before the next reading
}