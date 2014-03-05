#ifndef SUBJECT_H
#define SUBJECT_H
#include "Observer.h"
#include <string>

using namespace std;

struct iSubject
{
	virtual void Attach(Observer* observer) = 0;
	virtual void Detach(Observer* observer) = 0;
	virtual void Notify() = 0;
	virtual void Set(string) = 0;
	virtual string Get() = 0;
};
#endif