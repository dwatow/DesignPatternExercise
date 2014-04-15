#ifndef CONCREATESTATE_A_H
#define CONCREATESTATE_A_H
#include "state.h"

class ConcreteStateA : public State
{
public:
	void Handle(Context* context);
	const char* getType() const;
};

class ConcreteStateB : public State
{
public:
	void Handle(Context* context);
	const char* getType() const;
};
#endif