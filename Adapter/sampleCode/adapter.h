#ifndef ADAPTER_H
#define ADAPTER_H
#include "adaptee.h"
//Adapter是一種target，所以用繼承
//像是proxy一樣

class Adapter : public Target
{
	Adaptee m_Adaptee;  //要被翻譯的外國人
public:
	Adapter(){}
	void Request()
	{
		m_Adaptee.SpecificRequest();
	}
};
#endif