#ifndef CONCAVE_H
#define CONCAVE_H

#include "lens.h"

class ConcaveLens : public lens
{
public:
	void Lighting(int inLight, int& outLight) //打光
	{
		int olight;  //中繼
		m_material->Lighting(inLight, olight);

		std::cout << "concaveLens : " << olight << " x " << weaken() << " = ";

		outLight = olight * weaken();  //自訂

		cout << outLight << endl;
	}

private:
	float weaken()
	{
		return 0.5;
	}
};
#endif