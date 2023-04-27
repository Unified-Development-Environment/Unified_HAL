#include "arduinoUno_hal.h"

void GPIO_Write(int PIN, int VALUE) {

	digitalWrite(PIN, VALUE);

}