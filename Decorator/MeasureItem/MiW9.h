#ifndef CONCAVE_H
#define CONCAVE_H

#include "MiItem.h"

class W9 : public MiItem
{
	void AddW9(std::vector<std::string>& _vstr)
	{
		_vstr.push_back("白色 1點");
		_vstr.push_back("白色 2點");
		_vstr.push_back("白色 3點");
		_vstr.push_back("白色 4點");
		_vstr.push_back("白色 5點");
		_vstr.push_back("白色 6點");
		_vstr.push_back("白色 7點");
		_vstr.push_back("白色 8點");
		_vstr.push_back("白色 9點");
	}
public:
	void AddItem(std::vector<std::string>& _vstr)
	{
		m_measureItem->AddItem(_vstr);		
		AddW9(_vstr);
	}
};
#endif