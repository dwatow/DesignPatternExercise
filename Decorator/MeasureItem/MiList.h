#ifndef MSRITEMLIST_H
#define MSRITEMLIST_H

#include "Mi_.h"

class msrItemList : public Mi_
{

public:
	void AddItem(std::vector<std::string>& _vstr) //打光
	{
		std::string str("空的");
		_vstr.push_back(str);
	}
};
#endif
