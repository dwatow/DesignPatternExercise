#ifndef COMMON_MANAGER_H
#define COMMON_MANAGER_H
#include "Manager.h"

class CommonManager : public Manager
{
public:
	CommonManager(std::string name)
	{
		m_name = name;
	}

	void RequestApplications(Request request)
	{
		if (request.GetRequestType() == "請假" && request.GetNumber() <= 2)
		{
			std::cout << m_name << request.GetRequestContent() << "數量" << request.GetNumber() << "被批淮" << std::endl;
		}
		else
		{
			if (m_superior != 0)
				m_superior->RequestApplications(request);
		}
	}

};
#endif