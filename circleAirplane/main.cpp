#include <iostream>
#include "Circle.h"
#include "Airplane.h"
using namespace std;

int main()
{
	//1
	cout << "------1------" << endl << "Class Circle" << endl;
	Circle a(10);
	Circle b(8);
	a.Print();
	b.Print();
	if (a > b)
	{
		cout << "a > b" << endl;
	}
	else {
		cout << "b > a" << endl;
	}
	b += 1;
	a -= 1;
	a.Print();
	b.Print();
	if (a == b)
	{
		cout << "They are equal." << endl;
	}
	else {
		cout << "They aren't equal." << endl;
	}

	//2
	cout << endl << "-------2-------" << endl << "Class Airplane" << endl;
	Airplane c("Airliner", 100, 162);
	Airplane d("Jet", 19, 20);
	c.Print();
	d.Print();
	if (c == d)
	{
		cout << "They have the same type." << endl;
	}
	else {
		cout << "They don't have the same type." << endl;
	}
	++d;
	++d;
	--c;
	c.Print();
	d.Print();
	if (c > d)
	{
		cout << "First airplane can seat more passengers." << endl;
	}
	else {
		cout << "Second airplane can seat more passengers." << endl;
	}
}
