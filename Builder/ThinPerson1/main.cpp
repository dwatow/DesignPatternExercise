#include "other.h"
#include "PersonThinBuilder.h"
#include <iostream>

using namespace std;

int main()
{
	Pen* p = new Pen(Color.Yellow);
	Graphics* gThin = pictureBox.CreateGraphics();
	PersonThinBuilder* ptb = new PersonThinBuilder(gThin, p);
	ptb->Build();
	return 0;
}