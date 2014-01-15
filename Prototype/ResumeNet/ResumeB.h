#ifndef RESUMEB_H
#define RESUMEB_H
#include "Resume.h"
#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

class ResumeB : public Resume
{
public:
	ResumeB(const char* str)
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
	ResumeB(const ResumeB& r)
	{
		m_name = new char [strlen(r.m_name)+1];
		strcpy(m_name, r.m_name);
	}

	ResumeB* Clone()
	{
		return new ResumeB(*this);
	}
	void Show()
	{
    	cout << "ResumeB name : " << m_name << endl;     
	}
protected:
	virtual ~ResumeB(){ delete [] m_name; }
};
#endif