#include <Arduino.h>
#include <LED_Timer.h>

int ledPin = 3;
int duration = 10000;

LED_Timer tenSeconds(ledPin, duration);

void setup()
{
  tenSeconds.Enable();
}

void loop()
{
  tenSeconds.Update();
}
