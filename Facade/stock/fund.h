#ifndef FUND_H
#define FUND_H
#include "stock.h"
#include "realty.h"
#include "debt.h"
#include <iostream>

using namespace std;

class Fund
{
    Stock1* gu1;
    Stock2* gu2;
    Stock3* gu3;

    NationalDebt1* nd1;
    Realty1* rt1;

public:
    Fund()
    {
        Stock1* gu1        = new Stock1();
        Stock2* gu2        = new Stock2();
        Stock3* gu3        = new Stock3();
        NationalDebt1* nd1 = new NationalDebt1();
        Realty1* rt1       = new Realty1();
    }

    void buyFund()
    {
        gu1->buy();
        gu2->buy();
        gu3->buy();
        nd1->buy();
        rt1->buy();
    }

    void sellFund()
    {
        gu1->sell();
        gu2->sell();
        gu3->sell();
        nd1->sell();
        rt1->sell();
    }

    virtual ~Fund()
    {
        delete gu1;
        delete gu2;
        delete gu3;
        delete nd1;
        delete rt1;
    }
};
#endif