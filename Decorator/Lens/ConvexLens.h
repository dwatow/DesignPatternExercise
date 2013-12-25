#ifndef CONVEX_H
#define CONVEX_H

#include "lens.h"

class ConvexLens : public lens
{
public:
	void Lighting(int inLight, int& outLight) //打光
	{

		int olight;  //中繼
		m_material->Lighting(inLight, olight);

		std::cout << "convexLens : " << olight << " x " << weaken() << " = ";

		outLight = olight * weaken();  //自訂

		std::cout << outLight << endl;
	}
	
private:
	float weaken()
	{
		return 0.2;
	}
};
#endif