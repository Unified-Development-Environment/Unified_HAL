/*
 * 
 * uf_stm32f7.c
 * Consists of Implementations of the Unified HAL functions targetting the STM32F7 MCU 
 *     
 */

#include "uf_stm32f7.h"

void uf_gpioWrite(char PORT[], int PIN, int VALUE) {	//Write GPIO_OUTPUT function

	HAL_GPIO_WritePin(PORT, PIN, VALUE);		//calls vendor HAL function

}

int uf_gpioRead(char PORT[], int PIN) {			//Read GPIO_INPUT function

	return HAL_GPIO_ReadPin(PORT, PIN);		//returns vendor HAL function

}
