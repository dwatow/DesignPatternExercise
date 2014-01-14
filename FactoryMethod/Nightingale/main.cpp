#include "IFactory.h"

int main()
{
	IFactory* factory = new UnderFactory();
	Nightingale* student = factory->creatNightingale();
	student->Sweep();
	student->Wash();
	student->BuyRice();
	return 0;
}