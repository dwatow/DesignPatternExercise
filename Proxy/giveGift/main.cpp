#include <iostream>
#include "SchoolGirl.h"
#include "Proxy.h"

int main()
{
	SchoolGirl* jiaojiao = new SchoolGirl();
	jiaojiao->SetName("李嬌嬌");

	Proxy* daili = new Proxy(jiaojiao);  //把 被追求者 放進代理裡面。

	//代理做一些事。
	daili->GiveDolls();
	daili->GiveFlowers();
	daili->GiveChocolate();
	
	return 0;
}