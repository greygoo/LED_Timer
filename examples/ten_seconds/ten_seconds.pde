#include <Arduino.h>
#include <LED_Timer.h>

int ledPin=3;

LED_Timer tenSeconds(ledPin, 100);

void setup()
{
  tenSeconds.Enable();
}

void loop()
{
  tenSeconds.Update();
}
