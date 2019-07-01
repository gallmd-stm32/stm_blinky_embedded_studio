#ifndef INTERRUPTABLE_H_
#define INTERRUPTABLE_H_


class interruptable{

public:

interruptable();


virtual void handleInterrupts(int interruptType) = 0;

private:


};

#endif