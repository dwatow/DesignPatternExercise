#include "User.h"
#include "SqlServerUser.h"

int main()
{
	User* user = new User();
	SqlSevUser* su = new SqlSevUser();
	su->Insert(user);
	su->getUser(1);

	return 0;
}