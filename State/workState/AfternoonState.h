#ifndef AFTERNOONSTATE_H
#define AFTERNOONSTATE_H
#include "state.h"

class AfternoonState : public State
{
public:
	void WriteProgram(Work& w);
};
#endif