#include "NBAObserver.h"
#include "Subject.h"
#include <iostream>

using namespace std;

NBAObserver::NBAObserver(string name, iSubject* sub)
{
	m_name = name;
	m_pSub = sub;
}
void NBAObserver::Update()
{
	cout << m_pSub->Get() << m_name << "關閉NBA，繼續工作！" << endl;
}