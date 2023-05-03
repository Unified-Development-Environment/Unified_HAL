#include "uf_gpio.h"

uf_gpio test; 

void setup() {
  pinMode(13, OUTPUT);
  }

void loop() {
  test.uf_gpioWrite('D', 13, 1);
}