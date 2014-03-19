#ifndef IFACTORY_H
#define IFACTORY_H
#include "iUser.h"
#include "iDepartment.h"

struct iFactory
{
	virtual iUser* createUser() = 0;
	virtual iDepartment* creatDepartment() = 0;
};

class AccessFactory : public iFactory
{
public:
	iUser* createUser()
	{
		return new AccessUser();
	}
	iDepartment* creatDepartment()
	{
		return new AccessDepartment();
	}
};

class SqlSevFactory : public iFactory
{
public:
	iUser* createUser()
	{
		return new SqlSevUser();
	}
	iDepartment* creatDepartment()
	{
		return new SqlSevDepartment();
	}
};
#endif