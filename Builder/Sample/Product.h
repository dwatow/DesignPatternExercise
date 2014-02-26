#ifndef PRODUCT_H
#define PRODUCT_H
#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Product
{
	vector<string> m_parts;
public:
	void Add(string part)
	{
		m_parts.push_back(part);
	}

	void Show()
	{
		cout << endl << "產品 建立 ---" << endl;
		for (std::vector<string>::iterator it = m_parts.begin(); it != m_parts.end(); ++it)
			cout << *it << endl;
	}
};
#endif