#include "ConcreteComponent.h"
#include "ConcreteDecoratorA.h"
#include "ConcreteDecoratorB.h"
#include <iostream>

int main()
{
	ConcreteComponent*  mainC = new ConcreteComponent();
	ConcreteDecoratorA* Deco1 = new ConcreteDecoratorA();
	ConcreteDecoratorB* Deco2 = new ConcreteDecoratorB();

	//丟進去之後就是用父類別指標操作子物件。
	//子物件所有的function都要在父類別宣告並virtual
	Deco1->SetComponent(mainC);
	Deco2->SetComponent(Deco1);

	Deco2->Operation();

	return 0;
}
