#include <iostream>
#include "ConcreateColleague.h"
#include "ConcreateMediator.h"

int main()
{
	ConcreateMediator m;
	ConcreateColleague1* c1 = new ConcreateColleague1(&m);
	ConcreateColleague2* c2 = new ConcreateColleague2(&m);

	m.SetConcreateColleague1(c1);
	m.SetConcreateColleague2(c2);

	c1->Send("吃過飯了嗎？");
	c2->Send("沒有呢，你打算請客？");


	return 0;
}