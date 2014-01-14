#include "Resume.h"
#include "Prototype.h"

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
	ConcreteProrotype1
	return 0;
}

