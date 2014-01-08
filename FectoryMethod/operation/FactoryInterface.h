#ifndef FACTORY_H
#define FACTORY_H

#include "OperationInterface.h"

struct IFactory
{
	virtual Operation* creatOperation() = 0;
};
#endif