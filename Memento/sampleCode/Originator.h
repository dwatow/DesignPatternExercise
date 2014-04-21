#ifndef ORIGINATOR_H
#define ORIGINATOR_H
#include "Memento.h"
#include <string>
#include <iostream>

using namespace std;

class Originator
{
    string m_state;
public:
    void setState(const string& state)
    { m_state = state; }
    const string getState() const
    { return m_state; }

    Memento* createMemento()
    { return new Memento(m_state); }
    void setMemento(Memento* memento)
    { m_state = memento->getState();}

    void show()
    { cout << "State=" << m_state << endl; }
};
#endif