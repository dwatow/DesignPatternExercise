#ifndef PERSONTHINBUILDER_H
#define PERSONTHINBUILDER_H
#include "other.h"
#include <iostream>

using namespace std;

class PersonThinBuilder
{
protected:
	Graphics* m_pGraph;
	Pen* m_pPen;
public:
	PersonThinBuilder(Graphics* g, Pen* p)
	:m_pGraph(g), m_pPen(p){}	

	void Build()
	{
		cout << "畫出頭" << endl;
		cout << "畫出身體" << endl;
		cout << "畫出腳" << endl;
	    cout << "畫出手" << endl;
  
		cout << "建造" << m_pPen->getColor() << "小人" << endl;
	}
};
#endif