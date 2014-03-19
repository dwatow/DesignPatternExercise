#ifndef CONCREATESTATE_A_H
#define CONCREATESTATE_A_H
#include "state.h"

class concreateStateA : public state
{
public:
	void Handle(context* cnxt)
	{
		cnxt->setState(new concreateStateB());
	}
};

class concreateStateB : public state
{
public:
	void Handle(context* cnxt)
	{
		cnxt->setState(new concreateStateA());
	}
};
#endif