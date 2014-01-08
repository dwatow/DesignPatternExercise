#ifndef CONCAVE_H
#define CONCAVE_H

#include "MiItem.h"

class W9 : public MiItem
{
	void AddW9(std::vector<std::string>& _vstr)
	{
		_vstr.push_back("White_ 1");
		_vstr.push_back("White_ 2");
		_vstr.push_back("White_ 3");
		_vstr.push_back("White_ 4");
		_vstr.push_back("White_ 5");
		_vstr.push_back("White_ 6");
		_vstr.push_back("White_ 7");
		_vstr.push_back("White_ 8");
		_vstr.push_back("White_ 9");
	}
public:
	void AddItem(std::vector<std::string>& _vstr)
	{
		m_measureItem->AddItem(_vstr);		
		AddW9(_vstr);
	}
};
#endif