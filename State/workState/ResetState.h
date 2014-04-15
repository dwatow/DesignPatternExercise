#ifndef RESETSTATE_H
#define RESETSTATE_H
#include "state.h"

class ResetState : public State
{
public:
	void WriteProgram(Work& w);
};
#endif