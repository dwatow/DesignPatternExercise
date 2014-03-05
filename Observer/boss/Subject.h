#ifndef SUBJECT_H
#define SUBJECT_H
//#include "Observer.h"
#include <string>

using namespace std;

delegate void EventHandler();

struct iSubject
{
	//virtual void Attach(Observer* observer) = 0;
	//virtual void Detach(Observer* observer) = 0;
	virtual void Notify() = 0;
	virtual void SetSubject(string) = 0;
	virtual string GetSubject() = 0;
};
#endif