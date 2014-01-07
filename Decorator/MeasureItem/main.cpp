#include <iostream>
#include <vector>
#include <string>
#include "MiList.h"
#include "itemFactory.h"

using namespace std;

int main()
{
	std::vector<MiItem*> msrChoose;

	//choose UI for msrChoose list;
//	itemFactory ifty;
	int index;
	cout << "what do you measure? \n [0]showMsrList [1]w9 [2]d25: ";
	cin >> index;
	while (index != 0)
	{
		msrChoose.push_back( itemFactory::CreatItem(index) ); //準備裝飾品
		cout << "what do you measure? \n [0]showMsrList [1]w9 [2]d25: ";
		cin >> index;
	}

	//msrChoose list to List in Pattern;
	std::vector<MiItem*>::iterator prevItem;
	msrItemList* List = new msrItemList();  //本體
	for (std::vector<MiItem*>::iterator item = msrChoose.begin(); item != msrChoose.end(); ++item)
	{
		if (item == msrChoose.begin())
			(*item)->Then(List);		//裝飾品+本體
		else
			(*item)->Then((*prevItem));  //裝飾品+裝飾品

		prevItem = item;
	}

	//call back function
	std::vector<std::string> msrChain;
	std::vector<MiItem*>::reverse_iterator itemFinal = msrChoose.rbegin();
	(*itemFinal)->AddItem(msrChain);

	for (std::vector<std::string>::iterator it = msrChain.begin(); it != msrChain.end(); ++it)
	{
		cout << *it << endl;
	}

	cout << "THE END" << endl;
	return 0;
}