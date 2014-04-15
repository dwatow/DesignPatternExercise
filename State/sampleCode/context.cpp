#include "context.h"
#include <iostream>

using namespace std;

Context::Context(State* state)
:m_pState(state)
{}

const State* Context::getState() const
{
    return m_pState; 
}

void Context::setState(State* state)
{
    delete m_pState;
    m_pState = state;
    cout << "當前狀態" << m_pState->getType() << endl;
}

void Context::Request()
{
    m_pState->Handle(this);//把this傳進去更新
}

Context::~Context()
{
    delete m_pState;
}