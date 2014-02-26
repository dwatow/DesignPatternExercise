#include "StockObserver.h"
#include "Subject.h"
#include <iostream>

using namespace std;

StockObserver::StockObserver(string name, iSubject* sub)
{
	m_name = name;
	m_pSub = sub;
}	
void StockObserver::Update()
{
	cout << m_pSub->Get() << m_name << "關閉股票行情，繼續工作！" << endl;
}