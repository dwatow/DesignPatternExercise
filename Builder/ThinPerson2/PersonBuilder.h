#ifndef PERSONBUILDER_H
#define PERSONBUILDER_H
#include "other.h"

class PersonBuilder
{
protected:
	Graphics* m_pGraph;
	Pen*      m_pPen;
public:
	PersonBuilder(){}	
	PersonBuilder(Graphics* g, Pen* p):m_pGraph(g), m_pPen(p){}
	virtual void BuildHead() = 0;
	virtual void BuildBody() = 0;
	virtual void BuildArmLeft() = 0;
	virtual void BuildArmRight() = 0;
	virtual void BuildLegLeft() = 0;
	virtual void BuildLegRight() = 0;
};
#endif