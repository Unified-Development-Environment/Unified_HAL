/*
 * unified_hal.h
 *
 *  Created on: 24 Apr 2023
 *      Author: angaj
 */

#if defined(STM32F407xx)
	#include "stm32f4xx_hal.h"
#endif
#if defined(STM32F767xx)
	#include "stm32f4f7_hal.h"
#endif
#if defined(Arduino_h)
	#include "esp32-hal.h"
#endif


