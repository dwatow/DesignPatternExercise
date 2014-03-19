#ifndef IUSER_H
#define IUSER_H
#include "User.h"
#include <iostream>

using namespace std;

struct iUser
{
	virtual void Insert(User* user) = 0;
	virtual User* getUser(const int& id) const = 0;
};



class AccessUser : public iUser
{
public:
	void Insert(User* user)
	{
		cout << "在Access中給User表增加一條紀錄" << endl;
	}

	User* getUser(const int& id) const
	{
		cout << "在Access中根據ID得到User表一條紀錄" << endl;
		return 0;
	}
};

class SqlSevUser : public iUser
{
public:
	void Insert(User* user)
	{
		cout << "在SQL Server中給User表增加一條紀錄" << endl;
	}

	User* getUser(const int& id) const
	{
		cout << "在SQL Server中根據ID得到User表一條紀錄" << endl;
		return 0;
	}
};
#endif