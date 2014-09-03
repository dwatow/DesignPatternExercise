#ifndef CONCREATEhANDLER1_H
#define CONCREATEhANDLER1_H
#include "Handler.h"
#include <iostream>
#include <string>

class ConcreateHandler1 : public Handler
{
public:
	ConcreateHandler1(std::string name)
	{
		m_Name = name;
	}
	
	void HandleRequest(int request)
	{
		if (request >= 0 && request < 10)
		{
			std::cout << GetType() << "處理請求" << request << std::endl;
		}
		else if (m_successor != 0)
		{
			m_successor->HandleRequest(request);
		}
	}
};
#endif