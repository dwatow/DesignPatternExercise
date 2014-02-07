#ifndef FACADE_H
#define FACADE_H
#include "subSystem.h"

class Facade
{
    subSystemOne*   one;
    subSystemTwo*   two;
    subSystemThree* three;
    subSystemFour*  four;

public:
    Facade()
    {
        one   = new subSystemOne();
        two   = new subSystemTwo();
        three = new subSystemThree();
        four  = new subSystemFour();
    }
    
    void MethodA()
    {
        cout << endl << "方法組A() ----" << endl;
        one->MethodOne();
        two->MethodTwo();
        four->MethodFour();
    }

    void MethodB()
    {
        cout << endl << "方法組B() ----" << endl;
        two->MethodTwo();
        three->MethodThree();
    }
    
    ~Facade()
    {
        delete one;
        delete two;
        delete three;
        delete four;
    }

};
#endif