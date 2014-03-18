
#include "iUser.h"
#include "iFactory.h"

/*
user 是 user table 的資料
Insert(user)將資料插入資料庫
getUser(user)從資料庫取得資料
*/
int main()
{

//------------------ v2 ------------------
	//切換這一行，便可以決定createUser出來的user是什麼。
	iFactory* factory = new SqlSevFactory();  //業務邏輯
	//iFactory factory = new AccessFactory();

	User* user = new User();
	iUser* iu = factory->createUser(); //資料庫  //資料存取
	iu->Insert(user);
	iu->getUser(1);

//------------------ v1 ------------------
	//User* user = new User();
	//SqlSevUser* su = new SqlSevUser(); //資料庫
	//su->Insert(user);
	//su->getUser(1);

	delete factory;
	delete iu;

	return 0;
}