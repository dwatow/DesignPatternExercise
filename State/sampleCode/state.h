#ifndef STATE_H
#define STATE_H

class Context;

class State
{
public:
    virtual void Handle(Context* context) = 0;//*****
    virtual const char* getType() const = 0;
};
#endif