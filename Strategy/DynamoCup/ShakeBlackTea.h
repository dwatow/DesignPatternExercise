#ifndef SHAKEBLACKTEA_H
#define SHAKEBLACKTEA_H

#include "IShakeDrinkWay.h"

class ShakeBlackTea : public IShakeDrinkWay//紅茶
{
public:
	virtual std::string operator() ()
	{
		return "倒茶";
	}
};
#endif