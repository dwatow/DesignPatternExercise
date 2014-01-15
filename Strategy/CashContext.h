#include "CashNormal.h"
#include "CashReturn.h"
#include "CashRebate.h"
#include <iostream>

enum ConsumpType {CT_Normal, CT_Rebate, CT_Return};


class CashContext
{
	CashSuper* m_pcs;
private:
	int m_priceItem;  //100元的東西
public:
	void SetPrice(int price);
	int GetPrice();

private:
	int m_totalItem;  //12個
public:
	void SetTotal(int total);
	int GetTotal();

private:
	ConsumpType m_ctype;
public:
	std::string ConsumpTypeStr();

public:
	//策略模式的重點
	CashContext(ConsumpType ct);
	double GetResult();

public:
	CashContext():m_pcs(0){}
	~CashContext()
	{
		if (m_pcs != 0)
			delete m_pcs;
	}
};