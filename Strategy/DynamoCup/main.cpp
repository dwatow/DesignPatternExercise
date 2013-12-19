#include <iostream>
#include "someTea.h"

int main()
{
	someTea BlackTea(TT_BLACKTEA);

	std::cout << BlackTea.shakeWay() << std::endl;  //操作假的function，其實它是obj
	std::cout << "--THE END--" << std::endl;

	return 0;
}