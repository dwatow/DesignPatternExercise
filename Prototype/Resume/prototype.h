#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <string>

//http://liulinqi206.blog.163.com/blog/static/134604766201201525845561/
class Prototype
{
protected:
	string m_id;
public:
	Prototype(string id)
	{
		m_id = id;
	}

	const string GetId() const
	{
		return m_id;
	}

	Prototype* Clone();
};

#endif