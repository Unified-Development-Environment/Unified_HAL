/*
  uf_gpio.h - Unified HAL Library for GPIO functions.
*/

#ifndef uf_gpio_h
#define uf_gpio_h

#include "Arduino.h"

class uf_gpio

{
  public:
    void uf_gpioWrite(char PORT[], int PIN, int VALUE);
   //void uf_gpioRead(char[] PORT, int PIN, int VALUE);

  private:
    int _pin;
};

#endif