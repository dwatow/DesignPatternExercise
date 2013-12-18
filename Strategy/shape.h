#ifndef SHAPE_H
#define SHAPE_H
#include "getAreaFunciotn.h"
#include <string>

class shape
{
public:
	void SetPara(int i);
	virtual int GetArea() = 0;
	virtual std::string GetType() = 0;
};

#endif