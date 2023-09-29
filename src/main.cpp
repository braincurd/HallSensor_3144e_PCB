#include <Arduino.h>

int sensorPin = 12;
bool state;

void setup()
{
  delay(5000);
  Serial.begin(115200);
  delay(2000);
  Serial.println("Serial Started");
  pinMode(sensorPin, INPUT_PULLUP);
}

void loop()
{
  state = digitalRead(sensorPin);
  Serial.println(state);
}
