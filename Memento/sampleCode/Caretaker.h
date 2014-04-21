#ifndef CARETAKER_H
#define CARETAKER_H
#include "Memento.h"

class Caretaker
{
    Memento* m_pMemento;
public:
    void setMemento(Memento* memento)
    { m_pMemento = memento; }
    Memento* getMemento() const
    { return m_pMemento; }
};
#endif