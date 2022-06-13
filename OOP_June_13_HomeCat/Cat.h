#include <iostream>
#include <algorithm>
using namespace std;

class Cat
{
	string name;
	int age;
	double weight;
	bool gender;

public:
	Cat();
	Cat(string n);
	Cat(string n, int a);
	Cat(string n, int a, double w, bool g);
	void SetName(string n);
	void SetAge(int a);
	void SetWeight(double w);
	void SetGender(bool g);
	string GetName() const;
	int GetAge() const;
	double GetWeight() const;
	bool GetGender() const;
};