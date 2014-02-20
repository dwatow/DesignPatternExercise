#include "other.h"
#include "PersonThinBuilder.h"
#include <iostream>

using namespace std;

//建構與它的表示分離。
int main()
{
	Pen* p = new Pen(Color.Yellow);
	Graphics* gThin = pictureBox.CreateGraphics();
	PersonBuilder* pb = new PersonThinBuilder(gThin, p);
	pb->BuildHead();
	pb->BuildBody();
	pb->BuildArmLeft();
	pb->BuildArmRight();
	pb->BuildArmLeft();
	pb->BuildLegRight();
	return 0;
}