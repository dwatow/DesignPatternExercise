#ifndef VTXT_H
#define VTXT_H

#include "txt.h"
#include <iostream>

class vTxtFile : public TxtFile
{
public:
	virtual void Show()
	{
		for (std::vector<std::string>::iterator it = strData.begin(); it != strData.end(); ++it)
			std::cout << *it << "\n"; //std::endl;
	}
};
#endif