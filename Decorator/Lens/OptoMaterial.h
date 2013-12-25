#ifndef MATERIAL_H
#define MATERIAL_H

class OptoMaterial
{
public:
	virtual void Lighting(int inLight, int& outLight) = 0; //打光
};
#endif