#include "Secretary.h"
#include <iostream>
#include <algorithm>

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
	vector<Observer*>::iterator removeBegin = remove(m_observers.begin(), m_observers.end(), observer);
	m_observers.erase(removeBegin, m_observers.end());
}