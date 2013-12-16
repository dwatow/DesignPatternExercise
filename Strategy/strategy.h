#ifndef STRATEGY_H
#define STRATEGY_H

#include <iostream>

class Strategy
{
public:
    virtual void AlgorithmInterface() =0;
};

class ConcreateStratgyA : public Strategy
{
public:
    void AlgorithmInterface()
    {
        std::cout << "演算法A實現" << std::endl;
    }
};

class ConcreateStratgyB : public Strategy
{
public:
    void AlgorithmInterface()
    {
        std::cout << "演算法B實現" << std::endl;
    }
};

class ConcreateStratgyC : public Strategy
{
public:
    void AlgorithmInterface()
    {
        std::cout << "演算法C實現" << std::endl;
    }
};
#endif