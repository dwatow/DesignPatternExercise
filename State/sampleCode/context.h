#ifndef CONTEXT_H
#define CONTEXT_H
#include "state.h"

class Context
{
    State* m_pState;
public:
    Context(State* state = 0);
    
    const State* getState() const;
    void setState(State* state);

    void Request();
    ~Context();
};
#endif