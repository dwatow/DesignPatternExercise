#include "Decorator.h"
#include <string>

class ConcreteDecorator : public Decorator
{
private:
	std::string addedState;
public:
	void Operator()
	{
		base.Operator();
	}
};