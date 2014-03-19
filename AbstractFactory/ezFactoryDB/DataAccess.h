#ifndef ACCESSDATA_H
#define ACCESSDATA_H
#include "iUser.h"
#include "iDepartment.h"
#include <string>

using namespace std;

enum dbtype {dbSqlServer, dbAccess};

class DataAccess
{
	static const dbtype db = dbSqlServer;
	//static const dbtype db = dbAccess;
public:
	static iUser* createUser()
	{
		iUser* result = 0;
		switch (db)
		{
		case dbSqlServer:
			result = new SqlSevUser();
			break;
		case dbAccess:
			result = new AccessUser();
			break;
		}
		return result;
	}

	static iDepartment* createDepartment()
	{
		iDepartment* result = 0;
		switch (db)
		{
		case dbSqlServer:
			result = new SqlSevDepartment();
			break;
		case dbAccess:
			result = new AccessDepartment();
			break;
		}
		return result;
	}
};

#endif