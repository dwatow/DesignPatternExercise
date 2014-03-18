#ifndef IFACTORY_H
#define IFACTORY_H
#include "iUser.h"

struct iFactory
{
	virtual iUser* createUser() = 0;
};

class AccessFactory : public iFactory
{
public:
	iUser* createUser()
	{
		return new AccessUser();
	}
};

class SqlSevFactory : public iFactory
{
public:
	iUser* createUser()
	{
		return new SqlSevUser();
	}
};
#endif