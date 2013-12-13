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
        std::cout << "�t��kA��{" << std::endl;
    }
};

class ConcreateStratgyB : public Strategy
{
public:
    void AlgorithmInterface()
    {
        std::cout << "�t��kB��{" << std::endl;
    }
};

class ConcreateStratgyC : public Strategy
{
public:
    void AlgorithmInterface()
    {
        std::cout << "�t��kC��{" << std::endl;
    }
};
#endif