#include "Secretary.h"
#include "StockObserver.h"
#include "NBAObserver.h"
#include "Boss.h"
#include <iostream>

using namespace std;

int main()
{
	//櫃台小姐童子婕
	Secretary* tongzizhe = new Secretary();

	//看股票的同事
	Observer* tongshi1 = new StockObserver("魏關奼", tongzizhe);
	Observer* tongshi2 = new StockObserver("易管查", tongzizhe);

	//記下兩位同事
	tongzizhe->Attach(tongshi1);
	tongzizhe->Attach(tongshi2);

	//發老闆回來了
	tongzizhe->Set("老闆回來了");

	//通知兩個同事
	tongzizhe->Notify();

	delete tongshi2;
	delete tongshi1;
	delete tongzizhe;

	return 0;
}