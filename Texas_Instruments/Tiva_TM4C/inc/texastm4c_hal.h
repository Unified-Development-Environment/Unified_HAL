#ifndef uf_gpio_h
#define uf_gpio_h

#include "TExaS.h"

#define GPIO_PORTF_DATA_R   (*((volatile unsigned long *) 0x400253FC))

void uf_gpioWrite(char* PORT, int PIN, int VALUE);  
int uf_gpioRead(char* PORT, int PIN);

#endif
