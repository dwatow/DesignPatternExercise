#include "Caretaker.h"
#include "Originator.h"


int main()
{
    Originator o;
    o.setState("On");
    o.show();

    Caretaker c;
    c.setMemento(o.createMemento());

    o.setState("Off");
    o.show();

    o.setMemento(c.getMemento());
    o.show();

    return 0;
}
