const int sensorPin = A0;

void setup() {
Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  float voltage = sensorValue * (5.0 / 1023.0);
  float CO2ppm = 500 * voltage / 2.5;
  Serial.print("CO2 Concentration: ");
  Serial.print(CO2ppm);
  Serial.println(" ppm");
  delay(1000);
}
