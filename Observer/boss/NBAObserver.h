#ifndef NBAOBSERVER_H
#define NBAOBSERVER_H
//#include "Observer.h"
#include "Subject.h"
#include <iostream>

using namespace std;

class NBAObserver// : public Observer
{
	string m_name;
	iSubject* m_pSub;
public:
	NBAObserver():m_name(""), m_pSub(0){}
	NBAObserver(string name, iSubject* sub):m_name(name), m_pSub(sub){}
	
	bool operator==(const NBAObserver& comp)
	{ return (m_name == comp.m_name) ? true : false; }

	void CloseNBALive()
	{
		cout << m_pSub->GetSubject() << m_name << "關閉NBA，繼續工作！" << endl;
	}
};
#endif

