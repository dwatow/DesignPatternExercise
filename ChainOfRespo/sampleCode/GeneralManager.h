#ifndef GENERAL_MANAGER_H
#define GENERAL_MANAGER_H
#include "Manager.h"

class GeneralManager : public Manager
{
public:
	GeneralManager(std::string name)
	{
		m_name = name;
	}

	void RequestApplications(Request request)
	{
		if (request.GetRequestType() == "請假")
		{
			std::cout << m_name << request.GetRequestContent() << "數量" << request.GetNumber() << "被批淮" << std::endl;
		}
		else if (request.GetRequestType() == "加薪")
		{
			if (request.GetNumber() <= 500)
				std::cout << m_name << request.GetRequestContent() << "數量" << request.GetNumber() << "被批淮" << std::endl;
			else
				std::cout << m_name << request.GetRequestContent() << "數量" << request.GetNumber() << "再說吧" << std::endl;
		}
	}

};
#endif