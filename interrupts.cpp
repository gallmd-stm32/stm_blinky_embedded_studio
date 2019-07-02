#include "interrupts.h"

//array of pointers to objects that system interrupt functions will call
interruptable * handlerPointers[sizeof(interrupts)];


//system interrupt calls
extern "C"{



   void I2C1_EV_IRQHandler(void){

    handlerPointers[I2C1_EV_IDX]->handleInterrupts(0);
  
  }

   void I2C1_ER_IRQHandler(void)
  {
    

    handlerPointers[I2C1_EV_IDX]->handleInterrupts(1);

  }

}

