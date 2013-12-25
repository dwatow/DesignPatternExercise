#ifndef CONVEX_H
#define CONVEX_H

#include "MiItem.h"

class D25 : public MiItem
{
	void AddD25(std::vector<std::string>& _vstr) //打光
	{
		_vstr.push_back("黑色 1點");
		_vstr.push_back("黑色 2點");
		_vstr.push_back("黑色 3點");
		_vstr.push_back("黑色 4點");
		_vstr.push_back("黑色 5點");
		_vstr.push_back("黑色 6點");
		_vstr.push_back("黑色 7點");
		_vstr.push_back("黑色 8點");
		_vstr.push_back("黑色 9點");
		_vstr.push_back("黑色10點");
		_vstr.push_back("黑色11點");
		_vstr.push_back("黑色12點");
		_vstr.push_back("黑色13點");
		_vstr.push_back("黑色14點");
		_vstr.push_back("黑色15點");
		_vstr.push_back("黑色16點");
		_vstr.push_back("黑色17點");
		_vstr.push_back("黑色18點");
		_vstr.push_back("黑色19點");
		_vstr.push_back("黑色20點");
		_vstr.push_back("黑色21點");
		_vstr.push_back("黑色22點");
		_vstr.push_back("黑色23點");
		_vstr.push_back("黑色24點");
		_vstr.push_back("黑色25點");
	}
public:
	void AddItem(std::vector<std::string>& _vstr) //打光
	{
		m_measureItem->AddItem(_vstr);
	    AddD25(_vstr);
	}
};
#endif