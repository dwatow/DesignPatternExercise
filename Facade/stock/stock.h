#ifndef STOCK_H
#define STOCK_H
#include <iostream>

using namespace std;

class Stock1
{
public:
    void sell()
    {
        cout << "股票1賣出" << endl;
    }

    void buy()
    {
        cout << "股票1買入" << endl;
    }
};

class Stock2
{
public:
    void sell()
    {
        cout << "股票2賣出" << endl;
    }

    void buy()
    {
        cout << "股票2買入" << endl;
    }
};

class Stock3
{
public:
    void sell()
    {
        cout << "股票3賣出" << endl;
    }

    void buy()
    {
        cout << "股票3買入" << endl;
    }
};
#endif 