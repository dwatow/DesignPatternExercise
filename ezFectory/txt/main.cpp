#include "ezFactory.h"
#include <iostream>

int main()
{
	//txtEzFactory fileLog(TT_H);
	txtEzFactory fileLog(TT_V);
	
	fileLog.Add("line one is me!!");
	fileLog.Add("line two is me!!");
	fileLog.Add("line three is me!!");
	fileLog.Add("line four is me!!");
	fileLog.Add("line five is me!!");
	fileLog.Add("line six is me!!");

	fileLog.Show();
//	system("PAUSE");
	return 0;
}