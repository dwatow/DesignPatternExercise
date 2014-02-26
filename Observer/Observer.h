#ifndef OBSERVER_H
#define OBSERVER_H
#include <string>

using namespace std;

struct iSubject;

class Observer
{
protected:
	string m_name;
	iSubject* m_pSub;
public:
	Observer();
	Observer(string name, iSubject* sub);
	bool operator==(const Observer& comp);
	virtual void Update() = 0;	
};
#endif