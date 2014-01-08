#ifndef CONVEX_H
#define CONVEX_H

#include "MiItem.h"

class D25 : public MiItem
{
	void AddD25(std::vector<std::string>& _vstr) //打光
	{
		_vstr.push_back("Dark_ 1");
		_vstr.push_back("Dark_ 2");
		_vstr.push_back("Dark_ 3");
		_vstr.push_back("Dark_ 4");
		_vstr.push_back("Dark_ 5");
		_vstr.push_back("Dark_ 6");
		_vstr.push_back("Dark_ 7");
		_vstr.push_back("Dark_ 8");
		_vstr.push_back("Dark_ 9");
		_vstr.push_back("Dark_10");
		_vstr.push_back("Dark_11");
		_vstr.push_back("Dark_12");
		_vstr.push_back("Dark_13");
		_vstr.push_back("Dark_14");
		_vstr.push_back("Dark_15");
		_vstr.push_back("Dark_16");
		_vstr.push_back("Dark_17");
		_vstr.push_back("Dark_18");
		_vstr.push_back("Dark_19");
		_vstr.push_back("Dark_20");
		_vstr.push_back("Dark_21");
		_vstr.push_back("Dark_22");
		_vstr.push_back("Dark_23");
		_vstr.push_back("Dark_24");
		_vstr.push_back("Dark_25");
	}
public:
	void AddItem(std::vector<std::string>& _vstr)
	{
		m_measureItem->AddItem(_vstr);
	    AddD25(_vstr);
	}
};
#endif