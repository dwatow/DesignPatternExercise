#ifndef CONCRETEPROTOTYPE1
#define CONCRETEPROTOTYPE1
#include "Prototype.h"
#include <string>

using namespace std;

class ConcretePrototype1 : public Prototype
{
public:
	ConcretePrototype1(string id)
	{
		m_id = id;
	}

	//clone function of ConcretePrototype in Prototype pattern
	ConcretePrototype1* Clone()
	{
		return new ConcretePrototype1(*this);
	}
};

#endif