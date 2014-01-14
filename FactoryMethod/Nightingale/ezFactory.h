#ifndef EZFACTORY
#define EZFACTORY
#include "Volunteer.h"
#include "Undergraduate.h"
#include <string>

using namespace std;

enum ServType{likeNi = 0, Volun};

class ezFactory
{
public:
	static Nightingale* creatNightingale(ServType type)
	{
		Nightingale* result = 0;
		switch(type)
		{
		case likeNi:  //"學南丁格爾的大學生":
			result = new Undergraduate();
			break;
		case Volun:  //"社區義工":
			result = new Volunteer();
			break;
		}
		return result;
	}
};

#endif