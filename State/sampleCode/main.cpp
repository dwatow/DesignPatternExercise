#include "concreateState.h"

int main()
{
	context* c = new context(new concreateStateA() );

	c->Request();

	return 0;
}