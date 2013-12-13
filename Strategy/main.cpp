#include "strategy.h"
#include "context.h"

int main()
{
	Context* pContext;

	ConcreateStratgyA a;
	ConcreateStratgyB b;
	ConcreateStratgyC c;

	pContext = new Context(&a);
	pContext->ContextInterface();

	pContext = new Context(&b);
	pContext->ContextInterface();

	pContext = new Context(&c);
	pContext->ContextInterface();

	system("PAUSE");
	return 0;
}