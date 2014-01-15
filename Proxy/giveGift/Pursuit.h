#ifndef PURSUIT_H
#define PURSUIT_H
#include <iostream>
#include "IGiveGift.h"
#include "SchoolGirl.h"

using namespace std;

class Pursuit : IGiveGift
{
	SchoolGirl* m_mama;
public:
	Pursuit(SchoolGirl* mm)
	{
		m_mama = mm;
	}

	~Pursuit()
	{
		if (m_mama != 0)
			delete m_mama;
	}

	void GiveDolls()
	{
		cout << m_mama->GetName() << "送你娃娃" << endl;
	}

	void GiveFlowers()
	{
		cout << m_mama->GetName() << "送你鮮花" << endl;
	}

	void GiveChocolate()
	{
		cout << m_mama->GetName() << "送你巧克力" << endl;
	}
};
#endif