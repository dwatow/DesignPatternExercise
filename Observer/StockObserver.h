#ifndef STOCKOBSERVER_H
#define STOCKOBSERVER_H
#include "Observer.h"
#include <iostream>

using namespace std;

class StockObserver : public Observer
{
public:	
	StockObserver(string name, iSubject* sub);
	void Update();
};
#endif