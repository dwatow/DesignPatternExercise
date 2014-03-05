#ifndef SUBJECT_H
#define SUBJECT_H
#include "Observer.h"
#include <vector>
#include <algorithm>

using namespace std;

class Subject //發佈新聞主題、抽象通知者，由此發動通知觀察者的動作
{
public:
    virtual void Add(Observer* obsrv) = 0;
    virtual void Del(Observer* obsrv) = 0;
    virtual void Notify() = 0;
};
#endif