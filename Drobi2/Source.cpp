#include"Drob.h"

void main()
{
	Drob a(3, 2);
	Drob b(1,2);
	Drob c = a + b;
	a.print();
	b.print();
	c.print();
	//Drob c;
	//a.print();
	//b.print();
	//c = a + a + a;
	//c.print();

	system("pause");
}