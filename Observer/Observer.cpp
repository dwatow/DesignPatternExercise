#include "Observer.h"
#include <string>

using namespace std;

Observer::Observer()
:m_name(""), m_pSub(0)
{}

Observer::Observer(string name, iSubject* sub)
:m_name(name), m_pSub(sub)
{}

bool Observer::operator==(const Observer& comp)
{
	return (m_name == comp.m_name) ? true : false;
}