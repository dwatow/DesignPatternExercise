#ifndef COLLEAGUE_H
#define COLLEAGUE_H

class Mediator;

class Colleague
{
protected:
	Mediator* m_pMediator;
public:
	Colleague(){}
	Colleague(Mediator* mediator)
	{
		m_pMediator = mediator;
	}
};
#endif