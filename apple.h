#ifndef APPLE_H
#define APPLE_H

#include <iostream>
#include <assert.h>
using namespace std;

enum AppleColor { green=0, yellow, red }; // можно enum class

//Класс Apple
class Apple
{

private:
	AppleColor _color;
	double _weight;

public:
	Apple(AppleColor color = green, double weight = 0.2);
	~Apple();

	AppleColor color() const;
	double weight() const;

	//операция чтения из потока. 
	friend istream & operator>>(istream & is, Apple & a);

	//префиксная операция
	Apple & operator++();

	// постфиксная операция
	Apple  operator++(int);
	
};

// Операции сравнения на равенство и неравенство как внешние функции.
bool operator !=(const Apple &a, const Apple &b);
bool operator ==(const Apple &a, const Apple &b);

// Операции < <=
bool operator <(const Apple &a, const Apple &b);
bool operator <=(const Apple &a, const Apple &b);

inline ostream & operator<<(ostream & os, const Apple & a)
{
	os << "Цвет: ";
	switch (a.color())
	{
	case 0: os <<"Green  "; break;
	case 1: os << "Yellow  "; break;
	case 2: os << "Red  "; break;
	default:
		break;
	}
	os << "Вес: " << a.weight() << endl;
	return os;
};

#endif // !APPLE_H
