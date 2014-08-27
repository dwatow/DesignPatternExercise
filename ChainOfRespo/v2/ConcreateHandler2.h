#ifndef CONCREATEhANDLER2_H
#define CONCREATEhANDLER2_H
#include "Handler.h"
#include <iostream>
#include <string>

class ConcreateHandler2 : public Handler
{
public:
	ConcreateHandler2(std::string name)
	{
		m_Name = name;
	}
	void HandleRequest(int request)
	{
		if (request >= 10 && request < 20)
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