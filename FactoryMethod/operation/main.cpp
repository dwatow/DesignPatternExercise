#include "Factories.h"
#include "Operation.h"
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

	//簡化使用者
	//變動留給使用者
	//對擴允是開放的, 對修改是封閉的

	//建構各個operation 的子類別產生的物件，各有不同。
	//卻要執行相同的行為。
	IFactory* factory = new ModFactory();  //用這個取代簡單工廠的switch
	Operation* oper = factory->creatOperation();  //再這再new主要的運算子

	oper->SetA(60);
	oper->SetB(7);	
	cout << oper->GetResult() << endl;

	return 0;
}
