#ifndef CASHSUPER_H
#define CASHSUPER_H

//收費這回事
class CashSuper
{
public:
	virtual double acceptCash(double money) = 0;
};
#endif