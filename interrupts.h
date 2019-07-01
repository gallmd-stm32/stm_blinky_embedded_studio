#ifndef INTERRUPTS_H_
#define INTERRUPTS_H_

#include "interruptable.h"
#include "stm32f4xx.h"
//#include "i2c.h"

//class I2CMaster;'
class interruptable;

// static functionPointer handlerPointers[sizeof(interrupts)];

typedef void (*functionPointer)();

enum interrupts
{
  I2C1_EV_IDX,
  I2C1_ER_IDX,
  I2C2_EV_IDX,
  I2C2_ER_IDX,
  I2C3_EV_IDX,
  I2C3_ER_IDX

 };



class interrupts_class{

public:


// static interruptable *interruptableClasses[sizeof(interrupts)];
 static int initializeInterrupts();
 
 
 static interrupts_class* getInstance();

 private:

  static interrupts_class* instance;
  interrupts_class();

 };

static interrupts_class* global;

 #endif