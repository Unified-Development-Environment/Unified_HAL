/* STM32F7_GPIO_COMMON_H */

#ifndef STM32F7_GPIO_COMMON_H
#define STM32F7_GPIO_COMMON_H

#include "uf_stm32f7.h"

void uf_gpioWrite(char PORT[], int PIN, int VALUE);     //GPIO write function declaration
int uf_gpioRead(char PORT[], int PIN);          //GPIO read function declaration

#endif 
