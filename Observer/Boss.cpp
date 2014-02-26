#include "Boss.h"

#include "Secretary.h"
#include <iostream>

void Boss::Set(string action)
{
	m_action = action;
}

string Boss::Get()
{
	return m_action;
}

void Boss::Attach(Observer* observer)
{
	m_observers.push_back(observer);
}

//通知
void Boss::Notify()
{
	for (std::vector<Observer*>::iterator it = m_observers.begin(); it != m_observers.end(); ++it)
		(*it)->Update();		
}

void Boss::Detach(Observer* observer)
{
	;
//    if (index >= 0 && index < m_observers.size())
//        m_observers.erase(m_observers.begin() + index);  
}