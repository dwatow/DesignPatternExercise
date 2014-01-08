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
		if(m_measureItem != 0)   //單純為了要檢查，如果m_measureItem在建構子就 != 0 就不用這一段
			m_measureItem->AddItem(_vstr);
	}
};
#endif