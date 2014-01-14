#ifndef FACTORY_H
#define FACTORY_H

#include "Operation.h"

struct IFactory
{
	virtual Operation* creatOperation() = 0;
};
#endif