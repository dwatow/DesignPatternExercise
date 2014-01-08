#ifndef FACT_H
#define FACT_H

#include "FactoryInterface.h"
#include "OperationObj.h"

class AddFactory : public IFactory
{
public:
	Operation* creatOperation()
	{
		return new operAdd();
	}
};

class SubFactory : public IFactory
{
public:
	Operation* creatOperation()
	{
		return new operSub();
	}
};

class MulFactory : public IFactory
{
public:
	Operation* creatOperation()
	{
		return new operMul();
	}
};

class DivFactory : public IFactory
{
public:
	Operation* creatOperation()
	{
		return new operDiv();
	}
};

class ModFactory : public IFactory
{
public:
	Operation* creatOperation()
	{
		return new operMod();
	}
};

#endif