#include "concreateState.h"
#include "context.h"

void ConcreteStateA::Handle(Context* context)
{
    State* pState = new ConcreteStateB();
    context->setState(pState);
}

const char* ConcreteStateA::getType() const
{
    return "state A";
}

void ConcreteStateB::Handle(Context* context)
{
    State* pState = new ConcreteStateA();
    context->setState(pState);
}

const char* ConcreteStateB::getType() const
{
    return "狀態B";
}