#include "CashSuper.h"
#include <string>
#include <cstdlib>

//打折收費
class CashRebate : public CashSuper
{
	double m_moneyRebate;  //折扣
public:
	CashRebate(std::string monRebate)//:m_moneyRebate(1)
	{
		m_moneyRebate = atof(monRebate.c_str());
	}

	double acceptCash(double money)
	{
		return money * m_moneyRebate;
	}
};