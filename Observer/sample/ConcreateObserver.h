#ifndef CONCREATE_OBSERVER_H
#define CONCREATE_OBSERVER_H
#include "Observer.h"
#include "ConcreateSubject.h"
#include <iostream>

using namespace std;

class ConcreateObserver : public Observer
{
protected:
	string m_name;
	string m_observerState;
	ConcreateSubject* m_subject;
public:
	ConcreateObserver(ConcreateSubject* subject, const string& name):m_subject(subject), m_name(name){}
	
	virtual void Update()
	{
		m_observerState = m_subject->GetState();
		cout << "觀察者: " << m_name << "的新狀態是" << m_observerState << endl;
	}

	void SetSubject(ConcreateSubject* subject)
	{ m_subject = subject; }
	ConcreateSubject* GetSubject() const
	{ return m_subject; }

	bool operator==(const ConcreateObserver& co)
	{ return ( (m_name == co.m_name) && (m_subject == co.m_subject) ) ? true : false; }
};
#endif