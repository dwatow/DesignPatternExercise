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
	void Add(std::string str);
	void Show();
};

#endif