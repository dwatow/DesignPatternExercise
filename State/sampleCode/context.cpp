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
}

void Context::Request()
{
    m_pState->Handle(this);
    //把自己傳進去 依目前狀態決定下一個狀態
    //在state裡呼叫setState
    cout << "當前狀態" << m_pState->getType() << endl;  //與狀態相關
}

Context::~Context()
{
    delete m_pState;
}