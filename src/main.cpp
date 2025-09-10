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
  int newreading = map(reading, 500, 4096, 255, 0);
  analogWrite(LED_BUILTIN,newreading);
  ledBrightness = (ledBrightness + 1) % 256;
}
