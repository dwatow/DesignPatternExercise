#include "ConcreateBuilder1.h"
#include "ConcreateBuilder2.h"
#include "Director.h"
#include "Product.h"
#include <iostream>

using namespace std;

int main()
{
	Director* director = new Director();

	Builder* b1 = new ConcreateBuilder1();
	Builder* b2 = new ConcreateBuilder2();

	director->Construct(b1);
	Product p1 = b1->GetResult();  //用director的方法來建造產品
	p1.Show();

	director->Construct(b2);
	Product p2 = b2->GetResult();
	p2.Show();

	delete b2;
	delete b1;
	delete director;
	return 0;
}