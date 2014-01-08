#ifndef EZFECTORY_H
#define EZFECTORY_H

#include "vTxt.h"
#include "hTxt.h"	

enum TxtType{TT_V = 0, TT_H};

class txtEzFactory
{
	TxtFile* txtFile;
public:
	txtEzFactory(TxtType n);
	void Add(std::string str);
	void Show();
};

#endif