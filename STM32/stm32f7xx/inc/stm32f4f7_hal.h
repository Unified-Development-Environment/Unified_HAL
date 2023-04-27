/*
 * stm32f4f7_hal.h
 *
 *  Created on: 24 Apr 2023
 *      Author: angaj
 */

//void  HAL_GPIO_Init(GPIO_TypeDef  *GPIOx, GPIO_InitTypeDef *GPIO_Init);
//void  HAL_GPIO_DeInit(GPIO_TypeDef  *GPIOx, uint32_t GPIO_Pin);
//GPIO_PinState HAL_GPIO_ReadPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
//void HAL_GPIO_WritePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin, GPIO_PinState PinState);
//void HAL_GPIO_TogglePin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
//HAL_StatusTypeDef HAL_GPIO_LockPin(GPIO_TypeDef* GPIOx, uint16_t GPIO_Pin);
//void HAL_GPIO_EXTI_IRQHandler(uint16_t GPIO_Pin);
//void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);
void GPIO_Write(char* PORT, int PIN, int VALUE);
