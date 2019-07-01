/* Includes */
#include "stm32f4xx.h"
#include "gpio.h"
#include "interrupts.h"
#include "i2c.h"
//#include "interrupt_test.h"


//#include "stm32f4xx_syscfg.h"
//#include "misc.h"
//#include "gpio.h"
//#include "i2c.h"
//#include "display.h"

/* Private function prototypes */
void Delay(__IO uint32_t nCount);

//interrupts_class* interrupts_class::handlerPointers[6] = {0};
//I2CMaster* I2CMaster::handlers[1] = {0};
//I2CMaster i2c(I2C::BaseRegisters::I2C1_Base);


int main(void)
{
  
//  interrupt_test test();
  interrupts_class* tmp = interrupts_class::getInstance();
  I2CMaster i2c(I2C::BaseRegisters::I2C1_Base);

  
  

  return 0;

}

void Delay(__IO uint32_t nCount)
{
  while(nCount--)
  {
  }
}