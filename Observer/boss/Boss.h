#ifndef BOSS_H
#define BOSS_H
#include "Subject.h"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

class Boss : public iSubject
{
	string m_action;
public:
	//櫃台狀態
	void Set(string action)
	{
		m_action = action;
	}
	string Get()
	{
		return m_action;
	}
private:
	vector<Observer*> m_observers;
public:
	//增加
	void Attach(Observer* observer)
	{
		m_observers.push_back(observer);
	}
	//通知
	void Notify()
	{
		for (std::vector<Observer*>::iterator it = m_observers.begin(); it != m_observers.end(); ++it)
			(*it)->Update();		
	}
	void Detach(Observer* observer)
	{
		vector<Observer*>::iterator removeBegin = remove(m_observers.begin(), m_observers.end(), observer);
		m_observers.erase(removeBegin, m_observers.end());
	}
};
#endif