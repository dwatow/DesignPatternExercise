#ifndef WORKEXPERIENCE_H
#define WORKEXPERIENCE_H
#include "Prototype.h"
#include <string>

using namespace std;

class WorkExperience : public Prototype
{
	string m_work;
	string m_company;
public:
	void SetWork(string work)
	{
		m_work = work;
	}
	string GetWork()
	{
		return m_work;
	}

	void SetCompany(string company)
	{
		m_company = company;
	}

	string GetCompany()
	{
		return m_company;
	}

	WorkExperience* Clone()
	{
		return new WorkExperience(*this);
	}
};
#endif