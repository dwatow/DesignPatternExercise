#ifndef PERSONTHINBUILDER_H
#define PERSONTHINBUILDER_H
#include "other.h"
#include "PersonBuilder.h"
#include <iostream>

using namespace std;

class PersonThinBuilder : public PersonBuilder
{
public:
	PersonThinBuilder(Graphics* g, Pen* p)
	{
		m_pGraph = g;
		m_pPen   = p;
	}	

	void BuildHead()
	{
		cout << "建造頭" << endl;
	}
	void BuildBody()
	{
		cout << "建造身體" << endl;
	}
	void BuildArmLeft()
	{
		cout << "建造左手" << endl;
	}
	void BuildArmRight()
	{
		cout << "建造右手 " << endl;
	}
	void BuildLegLeft()
	{
		cout << "建造左腳 " << endl;
	}
	void BuildLegRight()
	{
		cout << "建造右腳 " << endl;
	}
};
#endif