#ifndef DIRECTOR_H
#define DIRECTOR_H
#include "Builder.h"

class Director
{
public:
	void Construct(Builder* builder)
	{
		//決定「建造過程」
		builder->BuildPartA();
		builder->BuildPartB();
	}
};
#endif