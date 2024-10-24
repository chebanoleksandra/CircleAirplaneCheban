#include "Airplane.h"
#include <iostream>
using namespace std;

Airplane::Airplane()
{
	type = nullptr;
	amount = 0;
	maxAmount = 0;
}

Airplane::Airplane(const char* t, int a, int m)
{
	type = new char[strlen(t) + 1];
	strcpy_s(type, strlen(t) + 1, t);
	amount = a;
	maxAmount = m;
}

Airplane::~Airplane()
{
	delete[] type;
	amount = 0;
	maxAmount = 0;
}

void Airplane::Print()
{
	cout << "Type = " << type << endl;
	cout << "Current amount of passengers = " << amount << endl;
	cout << "Max amount of passengers = " << maxAmount << endl;
}

bool Airplane::operator==(Airplane& b)
{
	if (type == b.type)
	{
		return true;
	}
	return false;
}

Airplane& Airplane::operator++()
{
	amount += 1;
	if (amount > maxAmount)
	{
		cout << "Max amount reached. " << amount - maxAmount << " passenger(s) left for an another plane." << endl;
		amount = maxAmount;
	}
	return *this;
}

Airplane& Airplane::operator--()
{
	amount -= 1;
	if (amount < 0)
	{
		cout << "Amount of passengers can't be below 0. Current amount set to 0." << endl;
		amount = 0;
	}
	return *this;
}

bool Airplane::operator>(Airplane& b)
{
	if (maxAmount > b.maxAmount)
	{
		return true;
	}
	return false;
}

bool Airplane::operator<(Airplane& b)
{
	if (*this > b)
	{
		return false;
	}
	return true;
}
