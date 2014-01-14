#ifndef RESUME
#define RESUME
#include <string>
#include <iostream>

using namespace std;

class Resume
{
	string m_name;
	string m_sex;
	string m_age;
	string m_timeRange;
	string m_company;
public:
	Resume(string name)
	{
		m_name = name;
	}

	void SetPersonalInfo(string sex, string age)
	{
		m_sex = sex;
		m_age = age;
	}

	void SetWorkExperience(string timeRange, string company)
	{
		m_timeRange = timeRange;
		m_company   = company;
	}

	void Display()
	{
		cout << m_name << " " << m_sex << " " << m_age << " " << endl;
		cout << "工作經歷:" << m_timeRange << " " << m_company << endl;
	}
};

#endif