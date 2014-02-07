#include "TestPaperA.h"
#include "TestPaperB.h"
#include <iostream>

using namespace std;

int main()
{
	cout << "學生甲 抄的試卷:" << endl;
	TestPaperA* studentA = new TestPaperA();
	studentA->TestQuestion1();
	studentA->TestQuestion2();
	studentA->TestQuestion3();

	cout << "----------------------" << endl;

	cout << "學生乙 抄的試卷:" << endl;
	TestPaperB* studentB = new TestPaperB();
	studentB->TestQuestion1();
	studentB->TestQuestion2();
	studentB->TestQuestion3();

	return 0;
}