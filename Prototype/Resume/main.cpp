#include "ConcretePrototype1.h"
#include "Prototype.h"
#include "Resume.h"
#include <iostream>

using namespace std;

int main()
{
/*
	Resume* a = new Resume("大鳥");
	a->SetPersonalInfo("男", "29");
	a->SetWorkExperience("1998-2000", "大話軟體");

	Resume* b = a;
	Resume* c = a;

	a->Display();
	b->Display();
	c->Display();
*/

//為了在指標之間建立相同又獨立的物件。
//指標相等 = 傳遞位址。
//但是在此並不是要這做，而是要建立物件。
//在物件內使用clone，所以才使用原型模式。
/*
	ConcretePrototype1* p1 = new ConcretePrototype1("I");
	ConcretePrototype1* c1 = p1->Clone();

	cout << "Clone: " << c1->GetId() << endl;
*/

	Resume* a = new Resume("王一號");
	a->SetPersonalInfo("男1", "10");
	a->SetWorkExperience("1111-2222", "一號科技");

	Resume* b = a->Clone();  //會用clone就是Prototype pattern
	//b->SetPersonalInfo("男2", "20");
	b->SetWorkExperience("2222-3333", "二號光電");

	Resume* c = a->Clone();  //會用clone就是Prototype pattern
	c->SetPersonalInfo("男3", "30");

	a->Display();
	b->Display();
	c->Display();


	return 0;
}

