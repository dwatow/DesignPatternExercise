#ifndef MIITEM_H
#define MIITEM_H
#include <iostream>
#include "Mi_.h"

using namespace std;

class MiItem : public Mi_
{
protected:
	Mi_* m_measureItem;

public:
	void Then(Mi_* mi_ = 0)
	{
		m_measureItem = mi_;
	}

	void AddItem(std::vector<std::string>& _vstr) //打光
	{
		if(m_measureItem != 0)
			m_measureItem->AddItem(_vstr);
	}
};
#endif