#ifndef SLEEPINGSTATE_H
#define SLEEPINGSTATE_H
#include "state.h"

class SleepingState : public State
{
public:
	void WriteProgram(Work& w);
};
#endif