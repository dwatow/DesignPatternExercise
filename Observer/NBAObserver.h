#ifndef NBAOBSERVER_H
#define NBAOBSERVER_H
#include "Observer.h"
#include <iostream>

using namespace std;

class NBAObserver : public Observer
{
public:	
	NBAObserver(string name, iSubject* sub);
	void Update();
};
#endif