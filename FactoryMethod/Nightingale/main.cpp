#include "IFactory.h"

int main()
{
	IFactory* factory = new UnderFactory();
	Nightingale* student = factory->creatNightingale();
	student->Sweep();
	student->Wash();
	student->BuyRice();

	delete factory;
	delete student;
	
	return 0;
}