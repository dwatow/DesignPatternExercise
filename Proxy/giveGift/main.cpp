#include <iostream>
#include "SchoolGirl.h"
#include "Proxy.h"

int main()
{
	//透明的擴充
	//不修改原本的類之下擴充
	//擴充本身就是proxy的特色
	SchoolGirl* jiaojiao = new SchoolGirl();
	jiaojiao->SetName("李嬌嬌");

	Proxy* daili = new Proxy(jiaojiao);  //把 被追求者 放進代理裡面。

	//代理做一些事。
	daili->GiveDolls();
	daili->GiveFlowers();
	daili->GiveChocolate();
	
	delete daili;

	return 0;
}