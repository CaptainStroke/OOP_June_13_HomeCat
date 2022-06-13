#include <iostream>
#include <algorithm>
using namespace std;

class Cat
{
private:
	string Name;
	int Age;
	double Weight;
	bool Gender;

public:
	Cat() // рекомендация: в любом классе делаем явно конструктор БЕЗ параметров + хотя бы одна версия конструктора с параметрами
	{
		SetName("Nicolas");
		SetAge(1);
		SetWeight(7);
		SetGender(true);
	}

	Cat(string n)
	{
		SetName(n);
		SetAge(18);
		SetWeight(75);
		SetGender(true);
	}

	Cat(string n, int a)
	{
		SetName(n);
		SetAge(a);
		SetWeight(75);
		SetGender(true);
	}

	Cat(string n, int a, double w, bool g)
	{
		SetName(n);
		SetAge(a);
		SetWeight(w);
		SetGender(g);
	} // если в классе есть несколько конструкторов, то это называется ПЕРЕГРУЗКА КОНСТРУКТОРОВ
};