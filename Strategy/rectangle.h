#ifndef RECTANGLE_H
#define RECTANGLE_H
#include "shape.h"

class rectangle : public shape
{
	int m_xSide;
	int m_ySide;
	const std::string m_shapeType;
public:
	rectangle(int xSide, int ySide):m_xSide(xSide), m_ySide(ySide), m_shapeType("矩形"){};
	int GetArea(){ return m_xSide * m_ySide; };	
	std::string GetType(){ return m_shapeType; };

};

#endif