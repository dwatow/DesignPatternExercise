#ifndef ABSTRACT_H
#define ABSTRACT_H
#include <iostream>

using namespace std;

class abstract
{
public:
    virtual void PrimitiveOperation1() = 0;
    virtual void PrimitiveOperation2() = 0;

    void TemplateMoethod()
    {
        PrimitiveOperation1();
        PrimitiveOperation2();
        cout << endl;
    }
protected:
};
#endif