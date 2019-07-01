
#ifndef RCC_H_
#define RCC_H_

#include "reg_access.h"
#include "reg_access_dynamic.h"
#include "registers.h"

namespace rcc {

typedef uint32_t BaseRegisterType; 
typedef uint32_t RccControlRegisterType;
typedef uint32_t RccAHB1EnableRegisterType;
typedef uint32_t RccAPB1EnableRegisterType;  

  namespace BaseRegisters
  {
    constexpr BaseRegisterType RccBaseRegister = 0x40023800U;
    
  }

  namespace RccClockControlRegister {

    constexpr RccControlRegisterType RegisterOffset = 0x00U;
    constexpr RccControlRegisterType RegisterReset = 0x00000083U;

    constexpr RccControlRegisterType PLLI2SReady = stm32fxx::bits::BIT27;
    constexpr RccControlRegisterType PLLI2SON = stm32fxx::bits::BIT26;
    constexpr RccControlRegisterType MainPLLReady = stm32fxx::bits::BIT25;
    constexpr RccControlRegisterType MainPLLOn = stm32fxx::bits::BIT24;
    constexpr RccControlRegisterType ClockSecuritySystemEnable = stm32fxx::bits::BIT19;
    constexpr RccControlRegisterType HSEBypass = stm32fxx::bits::BIT18;
    constexpr RccControlRegisterType HSEReady = stm32fxx::bits::BIT17;
    constexpr RccControlRegisterType HSEOn = stm32fxx::bits::BIT16;
    constexpr RccControlRegisterType HSIReady = stm32fxx::bits::BIT1;
    constexpr RccControlRegisterType HSIOn = stm32fxx::bits::BIT0;

  }

  namespace RccAHB1EnableRegister{

    constexpr RccControlRegisterType RegisterOffset = 0x30U;
    constexpr RccControlRegisterType RegisterReset = 0x00100000U;
    
    constexpr RccAHB1EnableRegisterType OtgHsulpi = stm32fxx::bits::BIT30;
    constexpr RccAHB1EnableRegisterType OtgHSEn = stm32fxx::bits::BIT29;
    constexpr RccAHB1EnableRegisterType EthernetMacPTP = stm32fxx::bits::BIT28;
    constexpr RccAHB1EnableRegisterType EthernetReception = stm32fxx::bits::BIT27;
    constexpr RccAHB1EnableRegisterType EthernetTransmission = stm32fxx::bits::BIT26;
    constexpr RccAHB1EnableRegisterType EthernetMAC = stm32fxx::bits::BIT25;
    constexpr RccAHB1EnableRegisterType DMA2DEN = stm32fxx::bits::BIT23;
    constexpr RccAHB1EnableRegisterType DMA2EN = stm32fxx::bits::BIT22;
    constexpr RccAHB1EnableRegisterType DMA1EN = stm32fxx::bits::BIT21;
    constexpr RccAHB1EnableRegisterType CcmDataRam = stm32fxx::bits::BIT20;
    constexpr RccAHB1EnableRegisterType BackupSramInterface = stm32fxx::bits::BIT18;
    constexpr RccAHB1EnableRegisterType CRCEN = stm32fxx::bits::BIT12;
    constexpr RccAHB1EnableRegisterType GpioK = stm32fxx::bits::BIT10;
    constexpr RccAHB1EnableRegisterType GpioJ = stm32fxx::bits::BIT9;
    constexpr RccAHB1EnableRegisterType GpioI = stm32fxx::bits::BIT8;
    constexpr RccAHB1EnableRegisterType GpioH = stm32fxx::bits::BIT7;
    constexpr RccAHB1EnableRegisterType GpioG = stm32fxx::bits::BIT6;
    constexpr RccAHB1EnableRegisterType GpioF = stm32fxx::bits::BIT5;
    constexpr RccAHB1EnableRegisterType GpioE = stm32fxx::bits::BIT4;
    constexpr RccAHB1EnableRegisterType GpioD = stm32fxx::bits::BIT3;
    constexpr RccAHB1EnableRegisterType GpioC = stm32fxx::bits::BIT2;
    constexpr RccAHB1EnableRegisterType GpioB = stm32fxx::bits::BIT1;
    constexpr RccAHB1EnableRegisterType GpioA = stm32fxx::bits::BIT0;


  }

  namespace RccAPB1EnableRegister
{

  constexpr RccControlRegisterType RegisterOffset = 0x40U;
  constexpr RccControlRegisterType RegisterReset = 0x00U;

  constexpr RccAPB1EnableRegisterType DACEnable = stm32fxx::bits::BIT29;
  constexpr RccAPB1EnableRegisterType PowerInterface = stm32fxx::bits::BIT28;
  constexpr RccAPB1EnableRegisterType Can2Enable = stm32fxx::bits::BIT26;
  constexpr RccAPB1EnableRegisterType Can1Enable = stm32fxx::bits::BIT25;
  constexpr RccAPB1EnableRegisterType I2C3Enable = stm32fxx::bits::BIT23;
  constexpr RccAPB1EnableRegisterType I2C2Enable = stm32fxx::bits::BIT22;
  constexpr RccAPB1EnableRegisterType I2C1Enable = stm32fxx::bits::BIT21;
  constexpr RccAPB1EnableRegisterType UART5Enable = stm32fxx::bits::BIT20;
  constexpr RccAPB1EnableRegisterType UART4Enable = stm32fxx::bits::BIT19;
  constexpr RccAPB1EnableRegisterType USART3Enable = stm32fxx::bits::BIT18;
  constexpr RccAPB1EnableRegisterType USART2Enable = stm32fxx::bits::BIT17;
  constexpr RccAPB1EnableRegisterType SPI3Enable = stm32fxx::bits::BIT15;
  constexpr RccAPB1EnableRegisterType SPI2Enable = stm32fxx::bits::BIT14;
  constexpr RccAPB1EnableRegisterType WindowWatchdog = stm32fxx::bits::BIT11;
  constexpr RccAPB1EnableRegisterType Timer14 = stm32fxx::bits::BIT8;
  constexpr RccAPB1EnableRegisterType Timer13 = stm32fxx::bits::BIT7;
  constexpr RccAPB1EnableRegisterType Timer12 = stm32fxx::bits::BIT6;
  constexpr RccAPB1EnableRegisterType Timer7 = stm32fxx::bits::BIT5;
  constexpr RccAPB1EnableRegisterType Timer6 = stm32fxx::bits::BIT4;
  constexpr RccAPB1EnableRegisterType Timer5 = stm32fxx::bits::BIT3;
  constexpr RccAPB1EnableRegisterType Timer4 = stm32fxx::bits::BIT2;
  constexpr RccAPB1EnableRegisterType Timer3 = stm32fxx::bits::BIT1;
  constexpr RccAPB1EnableRegisterType Timer2 = stm32fxx::bits::BIT0;


}

}

#endif 