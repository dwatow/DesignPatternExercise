#include "ezFactory.h"

	txtEzFactory::txtEzFactory(int n)
	{
		switch(n)
		{
		case TT_H: txtFile = new hTxtFile(); break;
		case TT_V: 
		default: txtFile = new vTxtFile(); break;
		}
	}

	void txtEzFactory::Add(std::string str)
	{
		txtFile->Add(str);
	}

	void txtEzFactory::Show()
	{
		txtFile->Show();
	}