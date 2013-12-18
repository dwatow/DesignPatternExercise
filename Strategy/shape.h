#ifndef SHAPE_H
#define SHAPE_H
#include <string>

enum ShapeType {CT_Normal, CT_Rebate, CT_Return};

class shape
{
protected:

public:
	virtual int GetArea() = 0;
	virtual std::string GetType() = 0;
};

#endif