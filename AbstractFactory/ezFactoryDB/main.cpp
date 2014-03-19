#include "DataAccess.h"
#include "iUser.h"
#include "iDepartment.h"

/*
user 是 user table 的資料
Insert(user)將資料插入資料庫
getUser(user)從資料庫取得資料
*/
	//DataAccess::db = dbSqlServer;

int main()
{
	iUser* iu = DataAccess::createUser();
	User* user = new User();
	iu->Insert(user);
	iu->getUser(1);

	iDepartment* id = DataAccess::createDepartment();
	Department* dept = new Department();
	id->Insert(dept);
	id->getDeptName(1);

	delete user;
	delete dept;
	delete iu;
	delete id;

	return 0;
}