#include "fund.h"
#include <iostream>

using namespace std;

int main()
{
    Fund* jijin = new Fund();

    jijin->buyFund();
    jijin->sellFund();

    delete jijin;

    return 0;
}