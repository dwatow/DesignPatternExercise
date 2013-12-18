#include "CashContext.h"

void CashContext::SetPrice(int price)
{
	m_priceItem = price;
}

int CashContext::GetPrice()
{
	return m_priceItem;
}

void CashContext::SetTotal(int total)
{
	m_totalItem = total;
}

int CashContext::GetTotal()
{
	return m_totalItem;
}

std::string CashContext::ConsumpTypeStr()
{
	switch(m_ctype)
	{
	case CT_Rebate:		return "打八折";
	case CT_Return:		return "滿300 送100";
	case CT_Normal:
		default:		return "一般消費";
	}
}

//策略模式的重點
CashContext::CashContext(ConsumpType ct)
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

double CashContext::GetResult()
{
	return m_pcs->acceptCash(m_priceItem * m_totalItem);
}