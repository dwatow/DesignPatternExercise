#ifndef TESTPAPER_H
#define TESTPAPER_H
#include <iostream>
#include <string>

using namespace std;

class TestPaper
{
protected:
	virtual string Answer1() = 0;
	virtual string Answer2() = 0;
	virtual string Answer3() = 0;
public:
	void TestQuestion1()
	{
		cout << "楊過得到，後來給了郭靖，煉成倚天劍、屠龍刀的玄鐵可能是[] a.球磨鑄鐵 b.馬蹄鐵 c.高速合金鋼 d.碳素纖維" << endl;
		cout << "答案:" << Answer1() << endl;
	}

	void TestQuestion2()
	{
		cout << "楊過、程英、陸無雙剷除了情花，造成[] a.使這種植物不再害人 b.使一種珍稀物種滅絕 c.那破了那個生物圈的平衡 d.造成地區沙漠化" << endl;
		cout << "答案:" << Answer2() << endl;
	}

	void TestQuestion3()
	{
		cout << "藍鳳凰使華山師徒、桃谷六仙嘔吐不止，如果你是大夫，你會給他們開什麼藥[] a.阿司匹靈 b.牛黃解毒片 c.氟呱酸 d.讓他們喝大量牛奶 e.以上全不對" << endl;
		cout << "答案:" << Answer3() << endl;
	}
};
#endif