#include "Cat.h"

Cat::Cat() // рекомендация: в любом классе делаем явно конструктор БЕЗ параметров + хотя бы одна версия конструктора с параметрами
{
    SetName("Nicolas");
    SetAge(1);
    SetWeight(7);
    SetGender(true);
}

Cat::Cat(string n)
{
    SetName(n);
    SetAge(18);
    SetWeight(75);
    SetGender(true);
}

Cat::Cat(string n, int a)
{
    SetName(n);
    SetAge(a);
    SetWeight(75);
    SetGender(true);
}

Cat::Cat(string n, int a, double w, bool g)
{
    SetName(n);
    SetAge(a);
    SetWeight(w);
    SetGender(g);
} // если в классе есть несколько конструкторов, то это называется ПЕРЕГРУЗКА КОНСТРУКТОРОВ

void Cat::SetName(string n)
{
    if (any_of(n.begin(), n.end(), ::isdigit))
    {
        cout << "Incorrect value for parameter name!\n";
        return;
    }
    name = n;
}

void Cat::SetAge(int a)
{
    if (a < 0  || a > 120)
    {
        cout << "Incorrect value for parameter age!\n";
        throw "Incorrect age for Cat! Probably Human";
    }
    age = a;
}

void Cat::SetWeight(double w)
{
    if (w < 0  || w > 120)
    {
        cout << "Incorrect value for parameter weight!\n";
        throw "Incorrect weight!";
    }
    weight = w;
}

void Cat::SetGender(bool g)
{
    gender = g;
}

string Cat::GetName() const
{
    return name;
}

int Cat::GetAge() const
{
    return age;
}

double Cat::GetWeight() const
{
    return weight;
}

bool Cat::GetGender() const
{
    return gender;
}