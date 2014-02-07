#include "conctreat.h"
#include <iostream>

using namespace std;

int main()
{
    abstract* c;

    c = new conctreatA();
    c->TemplateMoethod();
    delete c;

    c = new conctreatB();
    c->TemplateMoethod();
    delete c;
    
    return 0;
}