#ifndef SHAPEFACTOR_H
#define SHAPEFACTOR_H

#include "rectangle.h"
#include "circle.h"

enum shapeType {ST_CIRCLE, ST_RECT};

class shapFactory
{
	shape* m_pShape;
	shapeType m_st;	
public:
	shapeType GetType()
	{
		return m_st;
	}
	
	shape* CreatShape(shapeType st)
	{
		switch(st)
		{
		case ST_CIRCLE:
			m_pShape = new circle(15);
			break;
		case ST_RECT:
		default:
			m_pShape = new rectangle(5, 3);
		}
		m_pShape->
		return m_pShape;
	}
};

#endif