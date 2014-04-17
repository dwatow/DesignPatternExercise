#include "target.h"
#include "adapter.h"
#include <vector>
#include <iterator>

int main()
{
	std::vector<Target*> v;
	v.push_back(new Target());
	v.push_back(new Adapter());

	for (std::vector<Target*>::iterator it = v.begin(); it != v.end(); ++it)
	{
		(*it)->Request();
	}

	return 0;
}