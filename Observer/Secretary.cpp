#include "Secretary.h"
#include <iostream>

void Secretary::Set(string action)
{
	m_action = action;
}

string Secretary::Get()
{
	return m_action;
}

void Secretary::Attach(Observer* observer)
{
	m_observers.push_back(observer);
}

//通知
void Secretary::Notify()
{
	for (std::vector<Observer*>::iterator it = m_observers.begin(); it != m_observers.end(); ++it)
		(*it)->Update();		
}

void Secretary::Detach(Observer* observer)
{
	;
//    if (index >= 0 && index < m_observers.size())
//        m_observers.erase(m_observers.begin() + index);  
}