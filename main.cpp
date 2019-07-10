/* Includes */
#include "stm32f4xx.h"
#include "gpio.h"
#include "i2c.h"
#include "usart.h"
#include "gpio_config.h"
#include "display.h"



/* Private function prototypes */
void Delay(__IO uint32_t nCount);




int main(void)
{
  
  
  const GPIO<GPIOxBaseRegisters::GPIO_G,
              PINS::PIN13,
              GpioModes::Output,
              OutputTypes::PushPull,
              OutputSpeed::MediumSpeed,
              PullUpPullDown::NoPullUpPullDown,
              AlternateFunction::AF0>greenLED;

   __enable_irq();

  I2CMaster i2c(I2C::BaseRegisters::I2C1_Base);

  USART::Usart myUsart1(USART::BaseRegisters::USART1Base);

  uint8_t oscOn[17] = {0x21, 0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  uint8_t noBlink[17] = {0x81, 0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  uint8_t brightness[17] = {0xEF, 0,0,0,0,0,0,0,0,0,0,0,0,0,0};
  uint8_t allOn[17] = {0x00, 0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00,0xFF,0x00};
  uint8_t displayAddress = 0x70U;

  i2c.sendBytes(oscOn, displayAddress);
  Delay(0xFFFFF);
  i2c.sendBytes(noBlink, displayAddress);
  Delay(0xFFFFF);
  i2c.sendBytes(brightness, displayAddress);
  Delay(0xFFFFF);
  i2c.sendBytes(allOn, displayAddress);
//  i2c.sendBytes(display::characters::allCharacters[1][0]);



  while(1){
  
     Delay(0xFFFFF);
     greenLED.toggle();
     
//     myUsart1.sendBytes('t');
    
  }
  

  return 0;

}

void Delay(__IO uint32_t nCount)
{
  while(nCount--)
  {
  }
}