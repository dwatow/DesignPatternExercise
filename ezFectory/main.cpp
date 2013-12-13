#include <iostream>
#include "ezFactory.h"

int main()
{
	//txtEzFactory debugFile(TT_H);
	txtEzFactory debugFile(TT_V);
	
	debugFile.Add("line one is me!!");
	debugFile.Add("line two is me!!");
	debugFile.Add("line three is me!!");
	debugFile.Add("line four is me!!");
	debugFile.Add("line five is me!!");
	debugFile.Add("line six is me!!");

	debugFile.Show();
	system("PAUSE");
	return 0;
}