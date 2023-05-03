/*
  uf_gpio.cpp - Library for reading and writing values using GPIO communication.
  Uses Unified_HAL and target ArduinoUno
  Tested on ArduinoUnoR3 with Arduino IDE
*/

#include "uf_gpio.h"


void uf_gpio::uf_gpioWrite(char PORT[] , int PIN , int VALUE) //parameters need to be unified
{
    digitalWrite(PIN, VALUE);
}

// void Morse::dash()
// {
//   digitalWrite(_pin, HIGH);
//   delay(1000);
//   digitalWrite(_pin, LOW);
//   delay(250);
// }