#include "context.h"
#include "concreateState.h"

int main()
{
    Context* pContext = new Context(new ConcreteStateA());//init state

    pContext->Request();
    pContext->Request();
    pContext->Request();
    pContext->Request();
    pContext->Request();
    pContext->Request();
    pContext->Request();

    return 0;
}