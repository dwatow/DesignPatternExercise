#include "other.h"
#include "PersonThinBuilder.h"
#include "PersonDirector.h"
#include <iostream>

using namespace std;

//建構與它的表示分離。
int main()
{
	Pen* p = new Pen(Color.Yellow);
	PersonThinBuilder* ptb = new PersonThinBuilder(pictureBox.CreateGraphics(), p);
	PersonDirector* pdThin = new PersonDirector(ptb);  //隱藏Builder指標, 建造具備的條件(這一步像工廠)
	pdThin->createPerson();  //建造過程(call 不同細節的function)

	return 0;
}