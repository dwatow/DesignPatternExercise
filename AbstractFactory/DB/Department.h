#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include <string>

using namespace std;

class Department
{
	int m_id;
public:
	const int getId() const
	{ return m_id; }
	void setId(const int& id)
	{ m_id = id; }

private:
	string m_depName;
public:
	const string getDeptName() const
	{ return m_depName; }
	void setDeptName(const string& deptName)
	{ m_depName = deptName; }	
};
#endif