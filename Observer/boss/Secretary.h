#ifndef SECRETARY_H
#define SECRETARY_H
#include "Subject.h"
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

class Secretary : public iSubject
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
	////增加
	//void Attach(Observer* observer)
	//{ m_observers.push_back(observer); }
	////通知
	//void Detach(Observer* observer)
	//{
	//	m_observers.erase(remove(m_observers.begin(), m_observers.end(), observer), m_observers.end());
	//	delete observer;
	//}
	event EventHandler Update;  //C# code

	void Notify()
	{
		Update();		
	}
};
#endif
