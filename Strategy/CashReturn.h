#include "CashSuper.h"
#include <string>
#include <cstdlib>
#include <cmath>

//紅利收費
class CashReturn : public CashSuper
{
	double m_moneyCondition;   //條件
	double m_moneyReture;      //折扣
public:
	CashReturn(std::string monCondition, std::string monReturn)
	:m_moneyReture(0.0), m_moneyCondition(0.0)
	{
		m_moneyCondition = atof(monCondition.c_str());
		m_moneyReture    = atof(monReturn.c_str());
	}

	double acceptCash(double money)
	{
		double result = money;
		if (money >= m_moneyCondition)
			result = money - floor(money / m_moneyCondition) * m_moneyReture;
		return result;
	}
};
