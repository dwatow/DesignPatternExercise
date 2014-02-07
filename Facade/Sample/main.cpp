#include "facade.h"
#include <iostream>

using namespace std;

int main()
{
    Facade* facade = new Facade();

    facade->MethodA();
    facade->MethodB();

    delete facade;

    return 0;
}