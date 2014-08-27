#ifndef CONCREATEhANDLER3_H
#define CONCREATEhANDLER3_H
#include "Handler.h"
#include <iostream>
#include <string>

class ConcreateHandler3 : public Handler
{
public:
	ConcreateHandler3(std::string name)
	{
		m_Name = name;
	}
	void HandleRequest(int request)
	{
		if (request >= 20 && request < 30)
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