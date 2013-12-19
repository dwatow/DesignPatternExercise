#ifndef SHAKEDRINKWAY_H
#define SHAKEDRINKWAY_H

#include <string>

enum TeaType {TT_BLACKTEA, TT_PEARMILKTEA};

class ShakeDrinkWay
{
	TeaType m_tt;
	std::string blackTea()
	{
		return "倒茶";
	}

	std::string pearlMilkTea()
	{
		return "加珍珠、再倒茶";
	}

public:
	ShakeDrinkWay(TeaType tt): m_tt(tt){}
	std::string operator()()
	{
		switch(m_tt)
		{
		case TT_BLACKTEA:		return blackTea();
		case TT_PEARMILKTEA:
		default:				return pearlMilkTea();
		}
	}
};
#endif