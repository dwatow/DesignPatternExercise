#ifndef EVENINGSTATE_H
#define EVENINGSTATE_H
#include "state.h"

class EveningState : public State
{
public:
	void WriteProgram(Work& w);
};
#endif