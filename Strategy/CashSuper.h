#ifndef CASHSUPER_H
#define CASHSUPER_H

enum ConsumpType {CT_Normal, CT_Rebate, CT_Return};

//收費這回事
class CashSuper
{
public:
	virtual double acceptCash(double money) = 0;
};
#endif