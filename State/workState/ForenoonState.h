#ifndef FORENOONSTATE_H
#define FORENOONSTATE_H
#include "state.h"

class ForenoonState : public State
{
public:
	void WriteProgram(Work& w);
};
#endif