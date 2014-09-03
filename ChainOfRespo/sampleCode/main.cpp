#include <iostream>
#include <vector>
#include "CommonManager.h"
#include "Majordome.h"
#include "GeneralManager.h"

int main(int argc, char const *argv[])
{
	CommonManager* m1 = new CommonManager("金利");
	Majordome* m2 = new Majordome("宗劍");
	GeneralManager* m3 = new GeneralManager("鐘精勵");

	m1->SetSuperior(m2);
	m2->SetSuperior(m3);

	Request request;
	request.SetRequestType("請假");
	request.SetRequestContent("小菜請假");
	request.SetNumber(1);
	m1->RequestApplications(request);

	request.SetRequestType("請假");
	request.SetRequestContent("小菜請假");
	request.SetNumber(4);
	m1->RequestApplications(request);

	request.SetRequestType("加薪");
	request.SetRequestContent("小菜加薪");
	request.SetNumber(500);
	m1->RequestApplications(request);

	request.SetRequestType("加薪");
	request.SetRequestContent("小菜加薪");
	request.SetNumber(1000);
	m1->RequestApplications(request);

	return 0;
}