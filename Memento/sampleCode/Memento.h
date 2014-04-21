#ifndef MEMENTO_H
#define MEMENTO_H
#include <string>

using namespace std;

class Memento
{
    string m_state;
public:
    Memento(string state = ""):m_state(state){};
    const string getState() const
    { return m_state; }
};
#endif