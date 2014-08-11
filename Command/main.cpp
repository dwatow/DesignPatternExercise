#include "Barbecuer.h"
#include <iostream>
#include "BakeMuttonCmd.h"
#include "BakeChickenWingCmd.h"
#include "waiter.h"

using namespace std;

int main()
{
	/*
	Barbecuer boy;
	boy.BakeMutton();
	boy.BakeChickenWing();
	*/
	Barbecuer boy;
	Command* bakeMuttonCmd1 = new BakeMuttonCmd(boy);
	Command* bakeMuttonCmd2 = new BakeMuttonCmd(boy);
	Command* bakeChickenWing = new BakeChickenWingCmd(boy);

	waiter girl;

	girl.SetOrder(bakeMuttonCmd1);
	girl.Notify();
	girl.SetOrder(bakeMuttonCmd2);
	girl.Notify();
	girl.SetOrder(bakeChickenWing);
	girl.Notify();
	girl.SetOrder(bakeMuttonCmd1);
	girl.Notify();


	return 0;
}