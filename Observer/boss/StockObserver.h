#ifndef STOCKOBSERVER_H
#define STOCKOBSERVER_H
#include "Observer.h"
#include "Subject.h"
#include <iostream>

using namespace std;

class StockObserver : public Observer
{
	string m_name;
	iSubject* m_pSub;
public:	
	StockObserver():m_name(""), m_pSub(0){}
	StockObserver(string name, iSubject* sub):m_name(name), m_pSub(sub){}
	
	bool operator==(const StockObserver& comp)
	{ return (m_name == comp.m_name) ? true : false; }
	
	void Update()
	{
		cout << m_pSub->Get() << m_name << "關閉股票行情，繼續工作！" << endl;
	}
};
#endif