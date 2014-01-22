#ifndef PROTOTYPE_H
#define PROTOTYPE_H
#include <string>

using namespace std;
//http://liulinqi206.blog.163.com/blog/static/134604766201201525845561/
class Prototype
{
protected:
	string m_id;
public:
	Prototype(){}
	Prototype(string id)
	{
		m_id = id;
	}

	const string GetId() const
	{
		return m_id;
	}

	//clone function of prototype in Prototype pattern
	virtual Prototype* Clone() = 0;
};

#endif