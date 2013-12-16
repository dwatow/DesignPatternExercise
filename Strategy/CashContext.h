#include "CashNormal.h"
#include "CashReturn.h"
#include "CashRebate.h"
#include <iostream>

class CashContext
{
	CashSuper* m_pcs;
private:
	int m_priceItem;  //100元的東西
public:
	void SetPrice(int price)
	{
		m_priceItem = price;
	}

	int GetPrice()
	{
		return m_priceItem;
	}

private:
	int m_totalItem;  //12個
public:
	void SetTotal(int total)
	{
		m_totalItem = total;
	}

	int GetTotal()
	{
		return m_totalItem;
	}
private:
	ConsumpType m_ctype;
public:
	std::string ConsumpTypeStr()
	{
		switch(m_ctype)
		{
		case CT_Rebate:		return "打八折";
		case CT_Return:		return "滿300 送100";
		case CT_Normal:
			default:		return "一般消費";
		}
	}

public:
	//策略模式的重點
	CashContext(ConsumpType ct)
	{
		m_ctype = ct;
		switch(m_ctype)
		{
		case CT_Rebate:		m_pcs = new CashRebate("0.8");		  break;  //打八折
		case CT_Return:		m_pcs = new CashReturn("300", "100"); break;  //滿300 送100
		case CT_Normal:
		default:			m_pcs = new CashNormal();
		}
	}

	double GetResult()
	{
		return m_pcs->acceptCash(m_priceItem * m_totalItem);
	}
};