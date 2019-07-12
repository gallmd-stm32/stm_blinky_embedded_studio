/* Includes */
#include "stm32f4xx.h"
#include "gpio.h"
#include "i2c.h"
#include "usart.h"
#include "gpio_config.h"
#include "display.h"
#include "circular_buffer.h"



/* Private function prototypes */
void Delay(__IO uint32_t nCount);


int main(void)
{
  
  
  const GPIO<GPIOxBaseRegisters::GPIO_B,
              PINS::PIN12,
              GpioModes::Output,
              OutputTypes::PushPull,
              OutputSpeed::MediumSpeed,
              PullUpPullDown::NoPullUpPullDown,
              AlternateFunction::AF0>greenLED;

   __enable_irq();

  I2CMaster i2c(I2C::BaseRegisters::I2C1_Base);

  util::circular_buffer<uint8_t> usartTXBuf(50);
  util::circular_buffer<uint8_t> *txPtr;
  txPtr = &usartTXBuf;
  

  USART::Usart myUsart1(USART::BaseRegisters::USART1Base, txPtr);

  //setup i2c Display
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


 
  while(1){
     uint8_t data;
     if(!usartTXBuf.empty()){
  
      data = usartTXBuf.get();

      //ugly just wanted this to work
      if(data=='a')
      {i2c.sendBytes(display::characters::a, displayAddress);
      }
            if(data=='b')
      {i2c.sendBytes(display::characters::b, displayAddress);
      }
            if(data=='c')
      {i2c.sendBytes(display::characters::c, displayAddress);
      }
            if(data=='d')
      {i2c.sendBytes(display::characters::d, displayAddress);
      }
            if(data=='e')
      {i2c.sendBytes(display::characters::e, displayAddress);
      }
            if(data=='f')
      {i2c.sendBytes(display::characters::f, displayAddress);
      }
            if(data=='g')
      {i2c.sendBytes(display::characters::g, displayAddress);
      }
            if(data=='h')
      {i2c.sendBytes(display::characters::h, displayAddress);
      }
            if(data=='i')
      {i2c.sendBytes(display::characters::i, displayAddress);
      }
            if(data=='j')
      {i2c.sendBytes(display::characters::j, displayAddress);
      }
            if(data=='k')
      {i2c.sendBytes(display::characters::k, displayAddress);
      }
            if(data=='l')
      {i2c.sendBytes(display::characters::l, displayAddress);
      }
            if(data=='m')
      {i2c.sendBytes(display::characters::m, displayAddress);
      }
            if(data=='n')
      {i2c.sendBytes(display::characters::n, displayAddress);
      }
            if(data=='o')
      {i2c.sendBytes(display::characters::o, displayAddress);
      }
            if(data=='p')
      {i2c.sendBytes(display::characters::p, displayAddress);
      }
            if(data=='q')
      {i2c.sendBytes(display::characters::q, displayAddress);
      }
            if(data=='r')
      {i2c.sendBytes(display::characters::r, displayAddress);
      }
            if(data=='s')
      {i2c.sendBytes(display::characters::s, displayAddress);
      }
            if(data=='t')
      {i2c.sendBytes(display::characters::t, displayAddress);
      }
            if(data=='u')
      {i2c.sendBytes(display::characters::u, displayAddress);
      }
            if(data=='v')
      {i2c.sendBytes(display::characters::v, displayAddress);
      }
            if(data=='w')
      {i2c.sendBytes(display::characters::w, displayAddress);
      }
            if(data=='x')
      {i2c.sendBytes(display::characters::x, displayAddress);
      }
            if(data=='y')
      {i2c.sendBytes(display::characters::y, displayAddress);
      }
            if(data=='z')
      {i2c.sendBytes(display::characters::z, displayAddress);
      }
      myUsart1.sendBytes(data);
      greenLED.toggle();

     }
     Delay(0xFF);
     

    
  }
  

  return 0;

}

void Delay(__IO uint32_t nCount)
{
  while(nCount--)
  {
  }
}


