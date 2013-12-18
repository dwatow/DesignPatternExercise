#include "pattern.h"
#include <iostream>

int main()
{
	//CashContext Cc(CT_Normal); //送進去操作
	//CashContext Cc(CT_Rebate); //送進去操作
	pattern thePattern(ST_RECT); //送進去操作
	thePattern.iShapeTotal(50);

	std::cout << " 圖形: " << thePattern.oShapeType()
	          << " 數量: " << thePattern.oShapeTotal()
	          << " 總面積: " << thePattern.oArea()
	          << std::endl;

	
	return 0;
}