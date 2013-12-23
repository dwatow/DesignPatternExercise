
enum shapeType {ST_CIRCLE, ST_RECT};

class GetAreaFunction
{
	m_shapeType;
public:
	GetArea(shapeType st)
	{
		m_shapeType = st;
	}
	virtual int operator(void) = 0;
};
