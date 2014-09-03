#ifndef MAJOR_DOME_H
#define MAJOR_DOME_H
#include "Manager.h"

class Majordome : public Manager
{
public:
	Majordome(std::string name)
	{
		m_name = name;
	}

	void RequestApplications(Request request)
	{
		if (request.GetRequestType() == "請假" && request.GetNumber() <= 5)
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