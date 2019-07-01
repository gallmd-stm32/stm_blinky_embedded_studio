#include "interrupts.h"






/* Null, because instance will be initialized on demand. */
interrupts_class* interrupts_class::instance = 0;

interrupts_class* interrupts_class::getInstance()
{

  if(instance == 0)
  {
    instance = new interrupts_class();
    global = instance;
  }

  return instance;

 
 }

 interrupts_class::interrupts_class(){}

 interruptable * handlerPointers[sizeof(interrupts)];

extern "C"{



  void I2C1_EV_IRQHandler(void){

  handlerPointers[I2C1_EV_IDX]->handleInterrupts(1);
  
  }

  void I2C1_ER_IRQHandler(void)
  {
    
//     interrupts_class::handlerPointers[I2C1_ER_IDX];

  }

}

//int interrupts::registerInterrupt(interruptable *interruptablePtr)
//{
//
//  interrupts::interruptableClasses[Dummy_I2C1_EV_enum] = interruptablePtr;
//
//
//  return 1;
//}