#ifndef SCHOOLGIRL_H
#define SCHOOLGIRL_H
#include <string>

using namespace std;

class SchoolGirl
{
private:
	string m_Name;
public:
	string GetName()
	{
		return m_Name;
	}
	void SetName(string name)
	{
		m_Name = name;
	}
};

#endif