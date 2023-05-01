#include "ArduinoUno.c"
#define Arduino_h

void setup () 
{ 
  pinMode(13, OUTPUT);
}
void loop ()
{
  GPIO_Write('A', 13, 1);
  
  }