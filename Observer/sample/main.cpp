#include "ConcreateObserver.h"
#include "ConcreateSubject.h"
#include <iostream>

using namespace std;

int main()
{
	//發文
	ConcreateSubject* s = new ConcreateSubject();

	//X, Y, Z鄉民來看文章  建立觀察關係
	//鄉民登記要追縱
	s->Add(new ConcreateObserver(s, "X"));
	s->Add(new ConcreateObserver(s, "Y"));
	s->Add(new ConcreateObserver(s, "Z"));

	//發文
	s->SetState("ABC");

	//通知
	s->Notify();  //重點在此
	//利用「通知」來「更新」來正在追縱的鄉民
	return 0;
}