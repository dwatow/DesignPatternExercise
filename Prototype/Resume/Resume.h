#ifndef RESUME
#define RESUME
#include "WorkExperience.h"
#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

class Resume : public Prototype
{
	string m_name;
	string m_sex;
	string m_age;
	WorkExperience* m_pWork;
	//string m_timeRange;
	//string m_company;
public:
	Resume(string name)
	{
		m_name = name;
		m_pWork = new WorkExperience();
	}

	//clone function of Resume in Prototype pattern
	Resume(const Resume& myself)
	{
		m_name  = myself.m_name;
		m_sex   = myself.m_sex;
		m_age   = myself.m_age;
		m_pWork = myself.m_pWork->Clone();  //要被修改成 深複製 的複製過程
	}

	Resume(WorkExperience* work)
	{
		m_pWork = work->Clone();
	}

	void SetPersonalInfo(string sex, string age)
	{
		m_sex = sex;
		m_age = age;
	}

	void SetWorkExperience(string timeRange, string company)
	{
		m_pWork->SetWork(timeRange);
		m_pWork->SetCompany(company);
	}

	void Display()
	{
		cout << m_name << " " << m_sex << " " << m_age << " " << endl;
		cout << "工作經歷:" << m_pWork->GetWork() << " " << m_pWork->GetCompany() << endl;
		printf("m_pWork address: 0x%x\n", m_pWork);
	}

	//clone function of Resume in Prototype pattern
	Resume* Clone()
	{
		//改成深複製，要改建構子 Resume(const Resume& myself)
		return new Resume(*this);
	}
};

#endif