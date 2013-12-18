#include "pattern.h"
#include "shapFactory.h"
#include <iostream>

int main()
{
	//CashContext Cc(CT_Normal); //送進去操作
	//CashContext Cc(CT_Rebate); //送進去操作
	shapFactory factory;
	shape* theShape = factory.CreatShape(ST_CIRCLE);
	pattern thePattern(theShape); //送進去操作
	thePattern.iShapeTotal(5);


	std::cout //<< " 圖形: " << thePattern.oShapeType()
	          << " 數量: " << thePattern.oShapeTotal()
	          << " 總面積: " << thePattern.oArea()
	          << std::endl
	;

	return 0;
}