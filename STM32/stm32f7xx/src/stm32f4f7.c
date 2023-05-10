/*
 * srm32f7.c
 *
 *  Created on: 24 Apr 2023
 *      Author: angaj
 */

#include "stm32f4f7_hal.h"

void uf_gpioWrite(char* PORT, int PIN, int VALUE) {

	HAL_GPIO_WritePin(PORT, PIN, VALUE);

}

int uf_gpioRead(char* PORT, int PIN) {

	return HAL_GPIO_ReadPin(PORT, PIN);

}
