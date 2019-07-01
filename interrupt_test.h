#include "interruptable.h"
#include "gpio.h"



class interrupt_test : public interruptable
{


public:
interrupt_test();
int registerInterrupt();
void interruptHandler();
 const GPIO<GPIOxBaseRegisters::GPIO_B,
  	  PINS::PIN12,
  	  GpioModes::Output,
  	  OutputTypes::PushPull,
  	  OutputSpeed::MediumSpeed,
  	  PullUpPullDown::NoPullUpPullDown,
          AlternateFunction::AF0>greenLED;


};