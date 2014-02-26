#include "Secretary.h"
#include "StockObserver.h"
#include "NBAObserver.h"
#include "Boss.h"
#include <iostream>

using namespace std;

int main()
{
	//老闆胡漢三
	Boss* huhansan = new Boss();

	//櫃台小姐童子婕
	//Secretary* tongzizhe = new Secretary();

	//看股票的同事
	Observer* tongshi1 = new StockObserver("魏關奼", huhansan);
	//看NBA的同事
	Observer* tongshi2 = new NBAObserver("易管查", huhansan);

	//記下兩位同事
	huhansan->Attach(tongshi1);
	huhansan->Attach(tongshi2);

	huhansan->Detach(tongshi1);

	//發老闆回來了
	huhansan->Set("老闆回來了");

	//通知兩個同事
	huhansan->Notify();

	delete tongshi2;
	delete tongshi1;
	//delete tongzizhe;
	delete huhansan;

	return 0;
}