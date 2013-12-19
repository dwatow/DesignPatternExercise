#include "CashSuper.h"

//一般收費
class CashNormal : public CashSuper
{
public:
	double acceptCash(double money)
	{
		return money;
	}
};