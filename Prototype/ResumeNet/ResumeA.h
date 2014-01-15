#ifndef RESUMEA_H
#define RESUMEA_H
#include "Resume.h"
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

class ResumeA : public Resume
{
public:
	ResumeA(const char* str)
	{
		if (str == 0)
		{
			m_name = new char[1];
			m_name[0] = '\0';
		}
		else
		{
			m_name = new char[strlen(str)+1];
			strcpy(m_name, str);
		}
	}
	ResumeA(const ResumeA& r)
	{
		m_name = new char [strlen(r.m_name)+1];
		strcpy(m_name, r.m_name);
	}

	ResumeA* Clone()
	{
		return new ResumeA(*this); //傳輸自己
	}

	void Show()
	{
    	cout << "ResumeA name : " << m_name << endl;     
	}
protected:
	virtual ~ResumeA(){ delete [] m_name; }
};
#endif