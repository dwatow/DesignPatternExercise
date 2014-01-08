#include "FactoryObj.h"
#include "OperationObj.h"
#include <iostream>

using namespace std;

int main()
{
	//Operation* oper;
	//oper = OperatorFactory::creatOperate('/');

	IFactory* operFactory = new ModFactory();  //用這個取代簡單工廠的switch
	Operation* oper = operFactory->creatOperation();  //再這再new主要的運算子

	oper->SetA(60);
	oper->SetB(7);	
	cout << oper->GetResult() << endl;

	return 0;
}


