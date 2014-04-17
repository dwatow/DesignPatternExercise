#include "target.h"
#include "adapter.h"
int main()
{
	Target target;
	target.Request();

	Adapter adapter;
	adapter.Request();

	return 0;
}