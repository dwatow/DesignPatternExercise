#include "Component.h"
class Decorator : Component
{
protected:
	Component* m_pComponent;
public:
	void SetComponetn(Component component = 0):m_pComponent(component){}
	virtual void Operator()
	{
		if(m_component != 0)
			m_pComponent.Operator();
	}
};