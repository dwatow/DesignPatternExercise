#ifndef MEDIATOR_H
#define MEDIATOR_H
#include <string>

class Colleague;
class Mediator
{
public:
	virtual void Send(std::string message, Colleague* colleague) = 0;
};
#endif