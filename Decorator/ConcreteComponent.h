#include "Component.h"
#include <iostream>

class ConcreteComponent : public Component
{
public:
	void Operation()
	{
		std::cout << "具體物件的操作" << std::endl;
	}
};