#include "context.h"
#include "concreateState.h"

int main()
{
    State* pState = new ConcreteStateA();
    Context* pContext = new Context(pState);

    pContext->Request();
    pContext->Request();
    pContext->Request();
    pContext->Request();
    pContext->Request();
    pContext->Request();
    pContext->Request();

    return 0;
}