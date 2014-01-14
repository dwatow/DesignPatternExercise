#include "OperatorFactory.h"
#include "Oper.h"

Operation* OperatorFactory::creatOperate(char operate)
{
	Operation* oper = 0;
	switch(operate)
	{
	case '+':	oper = new operAdd();	break;
	case '-':	oper = new operSub();	break;
	case '*':	oper = new operMul();	break;
	case '/':	oper = new operDiv();	break;
	}
	return oper;
}
