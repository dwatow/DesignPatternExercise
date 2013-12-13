#ifndef CONTEXT_H
#define CONTEXT_H

#include <iostream>
#include "strategy.h"

class Context
{
    Strategy* m_pStrategy;
public:
    Context(Strategy* pStrategy)
    {
		m_pStrategy = pStrategy;
    }

    void ContextInterface()
    {
        m_pStrategy->AlgorithmInterface();    
    }
};
#endif