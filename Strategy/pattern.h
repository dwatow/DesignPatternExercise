#include "rectangle.h"
#include "circle.h"

enum shapeType {ST_CIRCLE, ST_RECT};

class pattern
{
	shape* m_pShape;
	int    m_totalShape;
public:
	pattern(shapeType st)
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
	}

	void iShapeTotal(int ts)
	{
		m_totalShape = ts;
	}

	int oShapeTotal()
	{
		return m_totalShape;
	}

	std::string oShapeType()
	{
		m_pShape->GetType();
	}

	int oArea()
	{
		return m_pShape->GetArea() * m_totalShape;
	}
};