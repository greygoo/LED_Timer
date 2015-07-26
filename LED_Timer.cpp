#include "Arduino.h"
#include "LED_Timer.h"

LED_Timer::LED_Timer(int pin, long on)
{
      enabled = 0;
      ledPin = pin;
      OnTime = on;
      prevMillis = 0;
}

void LED_Timer::Enable()
{
  enabled = 1;
  digitalWrite(ledPin, HIGH);
}

void LED_Timer::Update()
{
  unsigned long currentMillis = millis();

  if ( enabled && (currentMillis - prevMillis >= OnTime))
  {
    enabled = 0;
    prevMillis = currentMillis;
    digitalWrite(ledPin, LOW);
  }
}
