#ifndef PERSONBUILDER_H
#define PERSONBUILDER_H
#include "other.h"

class PersonBuilder  //固定不變的部份
{
protected:
	Graphics* m_pGraph;
	Pen*      m_pPen;
public:
	PersonBuilder():m_pGraph(0), m_pPen(0){}	
	PersonBuilder(Graphics* g, Pen* p):m_pGraph(g), m_pPen(p){}

	//利用純虛擬的強迫覆寫函式來達到強迫檢查避免漏掉。
	virtual void BuildHead() = 0;
	virtual void BuildBody() = 0;
	virtual void BuildArmLeft() = 0;
	virtual void BuildArmRight() = 0;
	virtual void BuildLegLeft() = 0;
	virtual void BuildLegRight() = 0;
};
#endif