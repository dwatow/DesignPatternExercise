#ifndef SHAKEPEARLMILKTEA_H
#define SHAKEPEARLMILKTEA_H

#include "IShakeDrinkWay.h"

class ShakePearlMilkTea : public IShakeDrinkWay //珍奶
{
public:
	virtual std::string operator() ()
	{
		return "加珍珠、再倒茶";
	}
};
#endif