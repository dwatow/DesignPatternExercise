#ifndef HTXT_H
#define HTXT_H

#include "txt.h"
#include <iostream>

class hTxtFile : public TxtFile
{
public:
	virtual void Show()
	{
		for (std::vector<std::string>::iterator it = strData.begin(); it != strData.end(); ++it)
			std::cout << *it << "\t";
	}
};
#endif