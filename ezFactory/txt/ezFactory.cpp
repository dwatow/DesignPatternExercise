#include "ezFactory.h"
#include <cassert>

txtEzFactory::txtEzFactory(TxtType n): txtFile(0)
{
	switch(n)
	{
	case TT_H: txtFile = new hTxtFile(); break;
	case TT_V: 
	default:   txtFile = new vTxtFile();// break;
	}
}

void txtEzFactory::Add(std::string str)
{
	txtFile->Add(str);
}

void txtEzFactory::Show()
{
	assert (txtFile == 0);
	txtFile->Show();
}