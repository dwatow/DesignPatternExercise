#ifndef SQLSERVERUSER_H
#define SQLSERVERUSER_H
#include "User.h"
#include <iostream>

using namespace std;

class SqlSevUser
{
public:
	void Insert(User* user)
	{
		cout << "在SQL Server中給User表增加一條紀錄" << endl;
	}

	User* getUser(const int& id)
	{
		cout << "在SQL Server中根據ID得到User表一條紀錄" << endl;
		return 0;
	}
};
#endif