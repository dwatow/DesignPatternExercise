#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class User
{
	int m_id;
public:
	const int getId() const
	{
		return m_id;
	}

	void setId(const int& id)
	{
		m_id = id;
	}
private:
	string m_name;
public:
	const string getName() const
	{
		return m_name;
	}

	void setName(const string& name)
	{
		m_name = name;
	}
};
#endif