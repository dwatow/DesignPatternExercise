#ifndef LGP_H
#define LGP_H

#include <iostream>
#include "OptoMaterial.h"

using namespace std;

class LGP : public OptoMaterial
{
public:
	virtual void Lighting(int inLight, int& outLight) //打光
	{
		std::cout << "LGP : " << inLight << " x 0.12" << " = ";
		outLight = inLight * 0.12;
		cout << outLight << endl;
	}
};
#endif