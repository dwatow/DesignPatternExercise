#include <iostream>
#include "Manager.h"
#include "Request.h"

int main(int argc, char const *argv[])
{
	Manager* jinli = new Manager("金利");
	Manager* zongjian = new Manager("宗劍");
	Manager* zhongjingli = new Manager("鐘精勵");

	Request* request = new Request();
	request->SetRequestType("加薪");
	request->SetRequestContent("小菜要求加薪");
	request->SetNumber(1000);

	jinli->GetResult("經理", request);
	zongjian->GetResult("總監", request);
	zhongjingli->GetResult("總經理", request);
	delete request;

	Request* request2 = new Request();
	request2->SetRequestType("請假");
	request2->SetRequestContent("小菜請假");
	request2->SetNumber(3);

	jinli->GetResult("經理", request2);
	zongjian->GetResult("總監", request2);
	zhongjingli->GetResult("總經理", request2);
	delete request2;

	return 0;
}