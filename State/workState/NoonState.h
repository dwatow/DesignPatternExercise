#ifndef NOONSTATE_H
#define NOONSTATE_H
#include "state.h"

class NoonState : public State
{
public:
	void WriteProgram(Work& w);
};
#endif