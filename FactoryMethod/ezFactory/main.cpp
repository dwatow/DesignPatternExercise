#include "OperatorFactory.h"
#include <iostream>

using namespace std;

int main()
{
	char operSymbol = '+';
	Operation* oper = OperatorFactory::creatOperate(operSymbol);
	oper->SetA(6);
	oper->SetB(2);	
	cout << oper->GetResult() << endl;

	if (oper != 0)
		delete oper;

	return 0;
}


