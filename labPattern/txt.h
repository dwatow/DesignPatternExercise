#ifndef TXTFILE_H
#define TXTFILE_H

#include <string>
#include <vector>

class TxtFile
{
protected:  //by Inherit
	std::vector<std::string> strData;
public:
	void Add(std::string str)
	{
		strData.push_back(str);
	};

	virtual void Show() = 0;  //can't make object
//	virtual void Show()
// 	{
// 		for (std::vector<std::string>::iterator it = strData.begin(); it != strData.end(); ++it)
// 			std::cout << *it << std::endl;
// 	};
};

#endif