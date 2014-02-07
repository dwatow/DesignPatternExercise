#ifndef SUBCLASS_H
#define SUBCLASS_H
#include <iostream>

using namespace std;

class subSystemOne
{
public:
    void MethodOne()
    {
        cout << "子系統方法一" << endl;
    }
};

class subSystemTwo
{
public:
    void MethodTwo()
    {
        cout << "子系統方法二" << endl;
    }
};

class subSystemThree
{
public:
    void MethodThree()
    {
        cout << "子系統方法三" << endl;
    }
};

class subSystemFour
{
public:
    void MethodFour()
    {
        cout << "子系統方法四" << endl;
    }
};
#endif