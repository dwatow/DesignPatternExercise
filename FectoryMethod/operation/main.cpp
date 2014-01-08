#include "FactoryObj.h"
#include "OperationObj.h"
#include <iostream>

using namespace std;

int main()
{
	//工廠在OperatorFactory::creatOperate，為一個工廠
	//char operSymbol = '/';
	//Operation* oper = OperatorFactory::creatOperate(operSymbol);

	//工廠在operFactory，建構可決定不同的工廠，工廠中的方法可以建構物件
	/*
	1. 不同工廠的工廠
	2. 初始化與建構分開(建立圖表的參數超多)
	*/
	IFactory* operFactory = new ModFactory();  //用這個取代簡單工廠的switch
	Operation* oper = operFactory->creatOperation();  //再這再new主要的運算子

	oper->SetA(60);
	oper->SetB(7);	
	cout << oper->GetResult() << endl;

	return 0;
}


