#ifndef CONTEXT_H
#define CONTEXT_H
#include "concreateState.h"

class context
{
	state* m_pState;
public:
	context(state* ste): m_pState(ste){}
	const state* getState() const
	{ return m_pState; }
	void setState(const state* ste)
	{
		m_pState = ste;
	//	cout << "目前狀態: " << m_pState << endl;
	}
	void Request()
	{
		m_pState->Handle(this);
	}
};
#endif