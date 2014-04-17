#ifndef TARGET_H
#define TARGET_H
#include <iostream>

using namespace std;

class Target
{
public:
	virtual void Request()
	{
		cout << "普通請求!!" << endl;
	}
};
#endif