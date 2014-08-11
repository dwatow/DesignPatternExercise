#ifndef WAITER_H
#define WAITER_H
#include "Command.h"

class waiter
{
	Command* m_pCommand;
public:
	void SetOrder(Command* pCmd)
	{
		m_pCommand = pCmd;
	}

	void Notify()
	{
		m_pCommand->ExcuteCommend();
	}
};
#endif