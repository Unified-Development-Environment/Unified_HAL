/*
 * 
 * uf_stm32f4.c
 * Consists of Implementations of the Unified HAL functions targetting the STM32F4 MCU 
 *     
 */

#include "uf_stm32f4.h"

void uf_gpioWrite(char PORT[], int PIN, int VALUE) {	//Write GPIO_OUTPUT function

	HAL_GPIO_WritePin(PORT, PIN, VALUE);		//calls vendor HAL function

}

int uf_gpioRead(char PORT[], int PIN) {			//Read GPIO_INPUT function

	return HAL_GPIO_ReadPin(PORT, PIN);		//returns vendor HAL function

}

void uf_gpioToggle(char PORT[], int PIN) {	

	HAL_GPIO_TogglePin(PORT, PIN);

}

void uf_delay(int DELAY) {			

	HAL_Delay(DELAY);

}
