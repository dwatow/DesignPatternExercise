#ifndef CIRCLE_H
#define CIRCLE_H
#include "shape.h"
#include <cmath>


class circle : public shape
{
	int m_r;
	const double PI;
public:
	circle(int r):m_r(r), PI(3.14159)
	{}

	int GetArea()
	{
		return pow(m_r, 2) * PI;
	}

	std::string GetType()
	{
		return "圓形"; 
	}

};

#endif