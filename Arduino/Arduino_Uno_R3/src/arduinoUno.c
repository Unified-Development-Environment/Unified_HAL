#include "arduinoUno_hal.h"


void GPIO_Write(char* PORT , int PIN, int VALUE) {

	digitalWrite(PIN, VALUE);

}