#include <iostream>
#include <algorithm>
using namespace std;

#include "Cat.h"
int main()
{
	Cat p; // создание объекта при помощи конструктора БЕЗ параметров
	//Cat p("Vaska");
	//Cat p("Human", 39);
	//Cat p("Easy", 6, 2, 1);

	//Person p(); // такая форма записи будет воспринята как прототип некой фукнции, которая называется p не принимает параметров и возвращает Person

	cout << p.GetName() << "\n";
	cout << p.GetAge() << "\n";
	cout << p.GetWeight() << "\n";
	cout << p.GetGender() << "\n";
}


//
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//class Cat
//{
//private:
//	string name;
//	int age;
//	double weight;
//	bool gender;
//
//public:
//	Cat() // рекомендация: в любом классе делаем явно конструктор БЕЗ параметров + хотя бы одна версия конструктора с параметрами
//	{
//		SetName("Nicolas");
//		SetAge(1);
//		SetWeight(7);
//		SetGender(true);
//	}
//
//	Cat(string n)
//	{
//		SetName(n);
//		SetAge(18);
//		SetWeight(75);
//		SetGender(true);
//	}
//
//	Cat(string n, int a)
//	{
//		SetName(n);
//		SetAge(a);
//		SetWeight(75);
//		SetGender(true);
//	}
//
//	Cat(string n, int a, double w, bool g)
//	{
//		SetName(n);
//		SetAge(a);
//		SetWeight(w);
//		SetGender(g);
//	} // если в классе есть несколько конструкторов, то это называется ПЕРЕГРУЗКА КОНСТРУКТОРОВ
//
//	void SetName(string n)
//	{
//		if (any_of(n.begin(), n.end(), ::isdigit))
//		{
//			cout << "Incorrect value for parameter name!\n";
//			return;
//		}
//		name = n;
//	}
//
//	void SetAge(int a)
//	{
//		if (a < 0 || a > 120)
//		{
//			cout << "Incorrect value for parameter age!\n";
//			throw "Incorrect age for Cat! Probably Human";
//		}
//		age = a;
//	}
//
//	void SetWeight(double w)
//	{
//		if (w < 0 || w > 120)
//		{
//			cout << "Incorrect value for parameter weight!\n";
//			throw "Incorrect weight!";
//		}
//		weight = w;
//	}
//
//	void SetGender(bool g)
//	{
//		gender = g;
//	}
//
//	string GetName() const
//	{
//		return name;
//	}
//
//	int GetAge() const
//	{
//		return age;
//	}
//
//	double GetWeight() const
//	{
//		return weight;
//	}
//
//	bool GetGender() const
//	{
//		return gender;
//	}
//};
//
//int main()
//{
//	Cat p; // создание объекта при помощи конструктора БЕЗ параметров
//	//Cat p("Vaska");
//	//Cat p("Human", 39);
//	//Cat p("Easy", 6, 2, 1);
//
//	//Person p(); // такая форма записи будет воспринята как прототип некой фукнции, которая называется p не принимает параметров и возвращает Person
//
//	cout << p.GetName() << "\n";
//	cout << p.GetAge() << "\n";
//	cout << p.GetWeight() << "\n";
//	cout << p.GetGender() << "\n";
//}
//
