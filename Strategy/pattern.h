#include "shape.h"

class pattern
{
	shape* m_pShape;
	int m_totalShape;
public:
	pattern(shape* pSp)
	{
		m_pShape = pSp;
	}

	int oArea()
	{
		return m_pShape->GetArea() * m_totalShape;
	}
};