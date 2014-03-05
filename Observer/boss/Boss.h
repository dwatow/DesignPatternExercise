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
	void SetSubject(const string& action)
	{ m_action = action; }
	const string GetSubject() const
	{ return m_action; }
//private:
	//vector<Observer*> m_observers;
public:
	//增加
	//void Attach(Observer* observer)
	//{m_observers.push_back(observer);}
	//通知
	//void Detach(Observer* observer)
	//{
	//	vector<Observer*>::iterator removeBegin = remove(m_observers.begin(), m_observers.end(), observer);
	//	m_observers.erase(removeBegin, m_observers.end());
	//}
	event EventHandler Update;  //C# code

	void Notify()
	{
		Update();		
	}
};
#endif