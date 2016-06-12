/*********************************************************************
  This is a library for LM35 temperature sensor.

  ------> http://www.easymcu.ir
  
  Check out the links above for our tutorials and wiring diagrams
  
  Written by Morteza Zandi for EasyMCU.
  BSD license, All text above must be included in any redistribution
 *********************************************************************/
 
#ifndef __LM35_HPP__
#define __LM35_HPP__


#include "adc.h"
extern ADC adc;

#define CELCIUS  			1
#define FAHRENHEIGHT  0


class LM35
{
  public:
    LM35(PORT_PIN_ARRAY _pin);
		int16_t temp(uint8_t deg = CELCIUS);

  private:
    PORT_PIN_ARRAY pin;
};
#endif
