#ifndef EZFECTORY_H
#define EZFECTORY_H

#include "vTxt.h"
#include "hTxt.h"	

enum TxtType_{TT_V = 0, TT_H};

class txtEzFactory
{
	TxtFile* txtFile;
public:
	txtEzFactory(int n);
//	{
//		switch(n)
//		{
//		case TT_H: txtFile = new hTxtFile(); break;
//		case TT_V: 
//		default: txtFile = new vTxtFile(); break;
//		}
//	}

	void Add(std::string str);
//	{
//		txtFile->Add(str);
//	}

	void Show();
//	{
//		txtFile->Show();
//	}
};

#endif