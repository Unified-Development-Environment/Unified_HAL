void pinMode(uint8_t pin, uint8_t mode); 
void digitalWrite(uint8_t pin, uint8_t val); 
int digitalRead(uint8_t pin);
void attachInterrupt(uint8_t pin, voidFuncPtr handler, int mode);
void attachInterruptArg(uint8_t pin, voidFuncPtrArg handler, void * arg, int mode);
void detachInterrupt(uint8_t pin);