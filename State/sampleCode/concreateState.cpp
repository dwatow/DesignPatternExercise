#include "concreateState.h"
#include "context.h"

void ConcreteStateA::Handle(Context* context)
{
	//決定下一個狀態是什麼
    context->setState(new ConcreteStateB());
}

void ConcreteStateB::Handle(Context* context)
{
	//決定下一個狀態是什麼
    context->setState(new ConcreteStateA());
}
