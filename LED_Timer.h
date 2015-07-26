/*
  LED_Timer.h - Library for a turning on a LED for a given Time.
*/

#ifndef LED_Timer_h
#define LED_Timer_h

#include "Arduino.h"

class LED_Timer
{
  public:
    LED_Timer(int pin, long on);
    void Enable();
    void Update();
  private:
    bool enabled;
    int ledPin;
    long OnTime;
    long prevMillis;
};

#endif
