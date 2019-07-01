/* Includes */
#include "stm32f4xx.h"
#include "gpio.h"
#include "interrupts.h"
#include "i2c.h"



//#include "stm32f4xx_syscfg.h"
//#include "misc.h"
//#include "gpio.h"
//#include "i2c.h"
//#include "display.h"

/* Private function prototypes */
void Delay(__IO uint32_t nCount);




int main(void)
{
  

  I2CMaster i2c(I2C::BaseRegisters::I2C1_Base);

  
  

  return 0;

}

void Delay(__IO uint32_t nCount)
{
  while(nCount--)
  {
  }
}