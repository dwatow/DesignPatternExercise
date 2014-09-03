#ifndef CONCREATECOLLEAGUE_H
#define CONCREATECOLLEAGUE_H
#include "Colleague.h"
#include "Mediator.h"
#include <string>

class ConcreateColleague1 : public Colleague
{
public:
	ConcreateColleague1(Mediator* mediator)
	{
		m_pMediator = mediator;
	}

	void Send(std::string message)
	{
		m_pMediator->Send(message, this);
	}

	void Notify(std::string messge)
	{
		std::cout << "同事1得到訊息" << messge << std::endl;
	}
};

class ConcreateColleague2 : public Colleague
{
public:
	ConcreateColleague2(Mediator* mediator)
	{
		m_pMediator = mediator;
	}

	void Send(std::string message)
	{
		m_pMediator->Send(message, this);
	}

	void Notify(std::string messge)
	{
		std::cout << "同事2得到訊息" << messge << std::endl;
	}
};
#endif