#include "CashContext.h"

int main()
{
	//CashContext Cc(CT_Normal); //送進去操作
	//CashContext Cc(CT_Rebate); //送進去操作
	CashContext Cc(CT_Return); //送進去操作
	Cc.SetPrice(100);
	Cc.SetTotal(12);


	std::cout << " 單價: " << Cc.GetPrice()
	          << " 數量: " << Cc.GetTotal()
	          << " " << Cc.ConsumpTypeStr()
	          << " 合計: " << Cc.GetResult()
	          << std::endl;

	return 0;
}