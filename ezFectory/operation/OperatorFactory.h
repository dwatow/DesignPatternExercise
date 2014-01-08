#ifndef OPERATION_H
#define OPERATION_H

#include "Operation.h"
#include <string>

using namespace std;

class OperatorFactory
{
public:
	static Operation* creatOperate(char operate);
};

#endif