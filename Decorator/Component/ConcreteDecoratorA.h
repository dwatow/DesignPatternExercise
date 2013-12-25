#ifndef CONCRETEDECORATORA_H
#define CONCRETEDECORATORA_H

#include "Decorator.h"
#include <iostream>

class ConcreteDecoratorA : public Decorator
{
public:
	void Operation()
	{
	//下面這兩行，哪一個比較好？？
		//Decorator::Operation();
		m_pComponent->Operation();

		AddedBehavior();
		std::cout << "具體裝飾物件A的操作" << std::endl;
	}

	void AddedBehavior()
	{
		std::cout << "具體裝飾物件A增加的行為" << std::endl;
	}
};
#endif