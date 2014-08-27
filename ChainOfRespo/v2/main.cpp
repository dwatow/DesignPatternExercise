#include <iostream>
#include <vector>
#include "ConcreateHandler1.h"
#include "ConcreateHandler2.h"
#include "ConcreateHandler3.h"

int main(int argc, char const *argv[])
{
	Handler* h1 = new ConcreateHandler1("經理");
	Handler* h2 = new ConcreateHandler2("總監");
	Handler* h3 = new ConcreateHandler3("總經理");

	h1->SetSuccessor(h2);
	h2->SetSuccessor(h3);

	int requests1[] = {2, 5, 14, 22, 18, 3, 27, 20};
	std::vector<int> requests(requests1+1, requests1+7);

	for (std::vector<int>::iterator it = requests.begin(); it != requests.end(); ++it)
	{
		h1->HandleRequest(*it);
	}

	return 0;
}