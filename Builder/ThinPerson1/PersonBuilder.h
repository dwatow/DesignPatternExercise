#ifndef PERSONBUILDER_H
#define PERSONBUILDER_H

class PersonBuilder
{
protected:
	Graphics* m_pGraph;
	Pen* m_pPen;
public:
	PersonBuilder(Graphics* g, Pen* p):m_pGraph(g), m_pPen(p){};
	void BuildHead() = 0;
	void BuildBody() = 0;
	void BuildArmLeft() = 0;
	void BuildArmRight() = 0;
	void BuildLegLeft() = 0;
	void BuildLegRight() = 0;
};
#endif