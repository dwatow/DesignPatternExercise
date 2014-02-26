#ifndef BUILDER_H
#define BUILDER_H
#include "Product.h"

class Builder
{
public:
	//決定建造時必要的零件有什麼
	virtual void BuildPartA() = 0;
	virtual void BuildPartB() = 0;
	
	virtual Product GetResult() = 0;
};
#endif