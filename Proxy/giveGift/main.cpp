#include <iostream>
#include "SchoolGirl.h"
#include "Proxy.h"

int main()
{
	SchoolGirl* jiaojiao = new SchoolGirl();
	jiaojiao->SetName("李嬌嬌");

	Proxy* daili = new Proxy(jiaojiao);

	daili->GiveDolls();
	daili->GiveFlowers();
	daili->GiveChocolate();
	
	return 0;
}