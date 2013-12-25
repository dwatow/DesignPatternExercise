#include <iostream>
#include <vector>
#include <string>
#include "MiList.h"
#include "MiD25.h"
#include "MiW9.h"

using namespace std;

int main()
{
	std::vector<std::string> msrChain;

	msrItemList* List = new msrItemList();
	W9*  w9  = new W9();
	D25* d25 = new D25();

	w9->Then(List);
	d25->Then(w9);

	d25->AddItem(msrChain);

	for (std::vector<std::string>::iterator it = msrChain.begin(); it != msrChain.end(); ++it)
	{
		cout << *it << endl;
	}
	return 0;
}