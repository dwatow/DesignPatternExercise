#ifndef IDEPARTMENT_H
#define IDEPARTMENT_H
#include "Department.h"

struct iDepartment
{
	virtual void Insert(Department* department) = 0;
	virtual Department* getDeptName(const int& id) = 0;
};

class SqlSevDepartment : public iDepartment
{
public:
	virtual void Insert(Department* department)
	{
		cout << "在SQL Server中給Department表增加一筆紀錄" << endl;
	}
	virtual Department* getDeptName(const int& id)
	{
		cout << "在SQL Server中根據ID得到Department表的一條紀錄" << endl;
		return 0;
	}
};

class AccessDepartment : public iDepartment
{
public:
	virtual void Insert(Department* department)
	{
		cout << "在Access中給Department表增加一筆紀錄" << endl;
	}
	virtual Department* getDeptName(const int& id)
	{
		cout << "在Access中根據ID得到Department表的一條紀錄" << endl;
		return 0;
	}
};
#endif

