#ifndef CONCREATEMEDIATOR_H
#define CONCREATEMEDIATOR_H
#include "Colleague.h"
#include "Mediator.h"

class ConcreateMediator : public Mediator
{
private:
	ConcreateColleague1* m_pColleague1;
	ConcreateColleague2* m_pColleague2;
public:
	void SetConcreateColleague1(ConcreateColleague1* Colleague1)
	{ m_pColleague1 = Colleague1; }

	void SetConcreateColleague2(ConcreateColleague2* Colleague2)
	{ m_pColleague2 = Colleague2; }

public:
	void Send(std::string message, Colleague* colleague)
	{
		if (colleague == m_pColleague1)
		{
			m_pColleague2->Notify(message);
		}
		else
		{
			m_pColleague1->Notify(message);
		}
	}
};
#endif