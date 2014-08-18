#ifndef WAITER_H
#define WAITER_H
#include "Command.h"
#include <vector>
#include <algorithm>

class waiter
{
	std::vector<Command*> orders;
	//Command* m_pCommand;
public:
	void SetOrder(Command* pCmd)
	{
		orders.push_back(pCmd);
	}

	void CancelOrder(Command* pCmd)
	{
		orders.erase(std::remove(orders.begin(), orders.end(), pCmd), orders.end());
	}

	void Notify()
	{
		for (std::vector<Command*>::iterator it = orders.begin(); it != orders.end(); ++it)
		{
			(*it)->ExcuteCommend();
		}
	}
};
#endif