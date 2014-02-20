#ifndef OTHER_H
#define OTHER_H
#include <string>

using namespace std;

static struct sysColor
{
	string Yellow;
	sysColor():Yellow("黃色"){}
}Color;

struct Graphics
{
	Graphics(){};
};

static struct picture
{
	Graphics* item;
	Graphics* CreateGraphics()
	{
		return new Graphics();
	}
}pictureBox;

struct Pen
{
	string m_clr;
	Pen(string clr):m_clr(clr){}
	string getColor(){ return m_clr; }
};

#endif