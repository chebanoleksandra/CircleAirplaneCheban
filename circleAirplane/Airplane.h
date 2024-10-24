#pragma once
class Airplane
{
	char* type;
	int amount;
	int maxAmount;
public:
	Airplane();
	Airplane(const char* t, int a, int m);
	~Airplane();
	void Print();
	bool operator==(Airplane& b);
	Airplane& operator++();
	Airplane& operator--();
	bool operator>(Airplane& b);
	bool operator<(Airplane& b);
};

