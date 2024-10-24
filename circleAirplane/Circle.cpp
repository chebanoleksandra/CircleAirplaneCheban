#include "Circle.h"
#include <iostream>
using namespace std;

const float PI = 3.14;
Circle::Circle()
{
	r = 0.0;
}

Circle::Circle(float radius)
{
	r = radius;
}

void Circle::Print()
{
	cout << "R = " << r << endl;
}

bool Circle::operator==(Circle& b)
{
	if (r == b.r)
	{
		return true;
	}
	return false;
}

bool Circle::operator>(Circle& b)
{
	float lenA = 2 * PI * r;
	float lenB = 2 * PI * b.r;
	if (lenA > lenB)
	{
		return true;
	}
	return false;
}

bool Circle::operator<(Circle& b)
{
	if (*this > b)
	{
		return false;
	}
	return true;
}

Circle& Circle::operator+=(int b)
{
	r += b;
	return *this;
}

Circle& Circle::operator-=(int b)
{
	r -= b;
	if (r < 0)
	{
		cout << "Radius < 0. Radius set to 0." << endl;
		r = 0;
	}
	return *this;
}


