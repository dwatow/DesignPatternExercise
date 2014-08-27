#ifndef MANAGER_H
#define MANAGER_H
#include "Request.h"

class Manager
{
private:
	std::string m_Name;
public:
	Manager(const std::string& Name):m_Name(Name)
	{}

public:
	void GetResult(std::string managerLevel, Request* request)
	{
		if (managerLevel == "經理")
		{
			if (request->GetRequestType() == "請假" && request->GetNumber() <= 2)
			{
				std::cout << m_Name << ":" << request->GetRequestContent() << "數量:" << request->GetNumber() << "被批淮" << std::endl;
			}
			else
			{
				std::cout << m_Name << ":" << request->GetRequestContent() << "數量:" << request->GetNumber() << "我無權處理" << std::endl;
			}
		}
		else if (managerLevel == "總監")
		{
			if (request->GetRequestType() == "請假" && request->GetNumber() <= 5)
			{
				std::cout << m_Name << ":" << request->GetRequestContent() << "數量:" << request->GetNumber() << "被批淮" << std::endl;
			}
			else
			{
				std::cout << m_Name << ":" << request->GetRequestContent() << "數量:" << request->GetNumber() << "我無權處理" << std::endl;
			}
		}
		else if (managerLevel == "總經理")
		{
			if (request->GetRequestType() == "請假")
			{
				std::cout << m_Name << ":" << request->GetRequestContent() << "數量:" << request->GetNumber() << "被批淮" << std::endl;
			}
			else if (request->GetRequestType() == "加薪" && request->GetNumber() <= 500)
			{
				std::cout << m_Name << ":" << request->GetRequestContent() << "數量:" << request->GetNumber() << "被批淮" << std::endl;
			}
			else if (request->GetRequestType() == "加薪" && request->GetNumber() > 500)
			{
				std::cout << m_Name << ":" << request->GetRequestContent() << "數量:" << request->GetNumber() << "再說吧" << std::endl;
			}
		}
	}

};
#endif