#ifndef STATE_H
#define STATE_H

class context;

class state
{
public:
	virtual void Handle(context* cnxt) = 0;
};
#endif