#include <Arduino.h>

void setup()
{
  Serial.begin(115200);
  Serial.println("Starting Reads");
}

int ledBrightness = 0;

void loop()
{
  delay(250);
  int reading = analogRead(A4);
  Serial.print("result: ");
  Serial.print(reading);
  Serial.println(" ");
  int newreading = map(reading, 500, 2150, 255, 0); //The room read 2000 at ambient light and 430 ish when uncovered
  analogWrite(LED_BUILTIN,newreading);
}
