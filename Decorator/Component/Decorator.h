#ifndef DECORATOR_H
#define DECORATOR_H

#include "Component.h"

class Decorator : public Component
{
protected:
	Component* m_pComponent;
public:
	void SetComponent(Component* component = 0)
	{
		m_pComponent = component;
	}

	virtual void Operation()
	{
		if(m_pComponent != 0)
			m_pComponent->Operation();
	}

	Decorator():m_pComponent(0){}
	~Decorator()
	{
		if (m_pComponent != 0)
			delete m_pComponent;
	}
};
#endif