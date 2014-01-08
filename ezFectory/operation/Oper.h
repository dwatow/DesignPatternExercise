#ifndef OPER_H
#define OPER_H

#include "Operation.h"

class operAdd : public Operation
{
public:
	double GetResult()
	{
		double result = 0;
		result = m_numberA + m_numberB;
		return result;
	}
};

class operSub : public Operation
{
public:
	double GetResult()
	{
		double result = 0;
		result = m_numberA - m_numberB;
		return result;
	}
};

class operMul : public Operation
{
public:
	double GetResult()
	{
		double result = 0;
		result = m_numberA * m_numberB;
		return result;
	}
};

class operDiv : public Operation
{
public:
	double GetResult()
	{
		double result = 0;
		if (m_numberB != 0)
			result = m_numberA / m_numberB;
		return result;
	}
};

#endif