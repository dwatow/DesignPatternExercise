#ifndef CONCREATE_SUBJECT_H
#define CONCREATE_SUBJECT_H
#include "Subject.h"
#include <string>

using namespace std;

class ConcreateSubject : public Subject
{
private:
	string m_subjectState; //新聞主題、抽象通知者、被觀察者的狀態
public:
	void SetState(const string& str)
	{m_subjectState = str;}
	const string GetState() const
	{return m_subjectState;}

private:
    std::vector<Observer*> m_vObservers;

public:
    void Add(Observer* obsrv)
    { m_vObservers.push_back(obsrv); }
    void Del(Observer* obsrv)
    { m_vObservers.erase(remove(m_vObservers.begin(), m_vObservers.end(), obsrv), m_vObservers.end()); }
    void Notify()
    { 
        for (std::vector<Observer*>::iterator o = m_vObservers.begin(); o != m_vObservers.end(); ++o)
            (*o)->Update();
    }
};
#endif