#ifndef CONCREAT_H
#define CONCREAT_H
#include "abstract.h"

using namespace std;

class conctreatA : public abstract
{
    //個別差異為私有
    void PrimitiveOperation1()
    {
        cout << "物件A 方法1實現" << endl;
    }

    void PrimitiveOperation2()
    {
        cout << "物件A 方法2實現" << endl;
    }
};

class conctreatB : public abstract
{
    //個別差異為私有
    void PrimitiveOperation1()
    {
        cout << "物件B 方法1實現" << endl;
    }

    void PrimitiveOperation2()
    {
        cout << "物件B 方法2實現" << endl;
    }
};
#endif