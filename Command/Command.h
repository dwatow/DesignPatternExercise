#ifndef COMMAND_H
#define COMMAND_H
#include "Barbecuer.h"

class Command
{
public:
	Barbecuer m_receiver;
public:
	Command()
	{ }
	virtual void ExcuteCommend() = 0;
};
#endif