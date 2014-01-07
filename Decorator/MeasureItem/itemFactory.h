#ifndef ITEMFACTORY_H
#define ITEMFACTORY_H
#include <string>
#include "MiD25.h"
#include "MiW9.h"

class itemFactory
{
public:
	static MiItem* CreatItem(int intdex)
	{
		switch (intdex)
		{
		case 1:
			return new W9();
			break;
		case 2:
			return new D25();
			break;
		}
	}
	
};
#endif