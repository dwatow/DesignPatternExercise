#include "Boss.h"
#include "Secretary.h"
#include "StockObserver.h"
#include "NBAObserver.h"


#include <iostream>

using namespace std;

int main()
{
	//老闆胡漢三
	Boss* huhansan = new Boss();

	//櫃台小姐童子婕
	//Secretary* tongzizhe = new Secretary();

	//記下兩位同事
	huhansan->Attach(new StockObserver("魏關奼", huhansan));	//看股票的同事
	huhansan->Attach(new NBAObserver("易管查", huhansan));	//看NBA的同事

	huhansan->Detach(new StockObserver("魏關奼", huhansan));

	//發老闆回來了
	huhansan->Set("老闆回來了");

	//通知兩個同事
	huhansan->Notify();

	//delete tongzizhe;
	delete huhansan;

	return 0;
}