#include "interrupt_test.h"



interrupt_test::interrupt_test()
{

}

void interrupt_test::interruptHandler()
{

    greenLED.toggle();

}