/*********************************************************************
  This is a library for LM35 temperature sensor.
  ------> http://www.easymcu.ir
  
  Check out the links above for our tutorials and wiring diagrams
  
  Written by Morteza Zandi for EasyMCU.
  BSD license, All text above must be included in any redistribution
 *********************************************************************/

#include "lm35.h"

LM35::LM35(PORT_PIN_ARRAY _pin)
{
  pin = _pin;
}

int16_t LM35::temp(uint8_t deg)
{
	int16_t val = adc.read(pin);
	if(deg == CELCIUS)
	{
		return ((val>>2)*(3300>>10))/10; // convert val to 10bit; every 10mv is 1 degree in celcius for lm35
	}
	else
	{
		return ((((val>>2)*(3300>>10)*9)/(5*10)) + 32); // convert celcius to fahrenheit
	} 
}
