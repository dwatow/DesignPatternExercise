#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include <cmath>


class circle : public shape
{
	int m_r;
	const double PI;
	const std::string m_shapeType;
public:
	circle(int r):m_r(r), m_shapeType("圓形"), PI(3.14159){}
	int GetArea()
	{
		return pow(m_r, 2) * PI;
	}
		std::string GetType(){ return m_shapeType; };

};

#endif