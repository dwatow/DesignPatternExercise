#ifndef FACTORY_H
#define FACTORY_H

#include "OperationInterface.h"

class IFactory
{
public:
	virtual Operation* creatOperation() = 0;
};
#endif