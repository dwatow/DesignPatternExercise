#ifndef TESTPAPERA_H
#define TESTPAPERA_H
#include "TestPaper.h"
#include <iostream>

using namespace std;

class TestPaperA : public TestPaper
{
	string Answer1(){return "a";}
	string Answer2(){return "b";}
	string Answer3(){return "c";}
};
#endif