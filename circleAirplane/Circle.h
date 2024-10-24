#pragma once
class Circle
{
	float r;
public:
	Circle();
	Circle(float radius);
	void Print();
	bool operator==(Circle& b);
	bool operator>(Circle& b);
	bool operator<(Circle& b);
	Circle& operator+=(int b);
	Circle& operator-=(int b);
};

