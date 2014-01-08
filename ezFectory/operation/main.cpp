#include "OperatorFactory.h"
#include <iostream>

using namespace std;

int main()
{
	Operation* oper;
	oper = OperatorFactory::creatOperate('/');
	oper->SetA(6);
	oper->SetB(2);	
	cout << oper->GetResult() << endl;

	return 0;
}


