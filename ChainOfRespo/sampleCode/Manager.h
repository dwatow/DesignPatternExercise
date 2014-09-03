#ifndef MANAGER_H
#define MANAGER_H
#include "Request.h"
#include <string>
class Manager
{
protected:
	std::string	m_name;
	Manager* m_superior;
public:
	Manager(){}
	Manager(std::string name):m_name(name){}
	void SetSuperior(Manager* superior)
	{
		m_superior = superior;
	}

	virtual void RequestApplications(Request request) = 0;
};
#endif