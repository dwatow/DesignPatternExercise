#ifndef STATE_H
#define STATE_H

class Work;

class State
{
public:
	virtual void WriteProgram(Work& w) = 0;
};
#endif