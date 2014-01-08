#ifndef PROXY_H
#define PROXY_H

#include "Pursuit.h"
#include "IGiveGift.h"
#include "SchoolGirl.h"

class Proxy : IGiveGift
{
	Pursuit* m_pGG;  //追求者 在代理中做事
public:
	Proxy(SchoolGirl* mm)
	{
		m_pGG = new Pursuit(mm);
	}

	void GiveDolls()
	{
		m_pGG->GiveDolls();
	}

	void GiveFlowers()
	{
		m_pGG->GiveFlowers();
	}

	void GiveChocolate()
	{
		m_pGG->GiveChocolate();
	}
};
#endif