#ifndef IFACTORY
#define IFACTORY
#include "Undergraduate.h"
#include "Volunteer.h"

//由這個組合來取代ezFactory

struct IFactory
{
	virtual Nightingale* creatNightingale() = 0;
};

class UnderFactory : public IFactory
{
public:
	Nightingale* creatNightingale()
	{
		return new Undergraduate();
	}
};

class VolunFactory : public IFactory
{
public:
	Nightingale* creatNightingale()
	{
		return new Volunteer();
	}
};


#endif