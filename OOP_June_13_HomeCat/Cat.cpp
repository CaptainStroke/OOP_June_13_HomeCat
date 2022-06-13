#include "Cat.h"
void SetName(string n)
{
	if (any_of(n.begin(), n.end(), ::isdigit))
	{
		cout << "Incorrect value for parameter name!\n";
		return;
	}
	name = n;
}

void SetAge(int a)
{
	if (a < 0 || a > 120)
	{
		cout << "Incorrect value for parameter age!\n";
		throw "Incorrect age for Cat! Probably Human";
	}
	age = a;
}

void SetWeight(double w)
{
	if (w < 0 || w > 120)
	{
		cout << "Incorrect value for parameter weight!\n";
		throw "Incorrect weight!";
	}
	weight = w;
}

void SetGender(bool g)
{
	gender = g;
}

string GetName() const
{
	return name;
}

int GetAge() const
{
	return age;
}

double GetWeight() const
{
	return weight;
}

bool GetGender() const
{
	return gender;
}