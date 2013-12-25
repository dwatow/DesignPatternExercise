#ifndef LENS_H
#define LENS_H
#include <iostream>
#include "OptoMaterial.h"

using namespace std;

class lens : public OptoMaterial
{
protected:
	OptoMaterial* m_material;
public:
	void AddMaterial(OptoMaterial* material = 0)
	{
		m_material = material;
	}

	void Lighting(int inLight, int& outLight) //打光
	{
	//如果有部材就使用部材衰減光
	//否則就透光率0.95
		if(m_material != 0)
		{
			cout << "搭配其它光學部材" << endl;
			m_material->Lighting(inLight, outLight);			
		}
		else
		{
			cout << "lens : " << inLight << " x 0.95";
			outLight = inLight * 0.95;
			cout << endl;
		}
	}
};
#endif