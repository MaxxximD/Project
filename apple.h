#ifndef APPLE_H
#define APPLE_H

#include <iostream>
#include <assert.h>
using namespace std;

enum AppleColor { green=0, yellow, red }; // ����� enum class

//����� Apple
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

	//�������� ������ �� ������. 
	friend istream & operator>>(istream & is, Apple & a);

	//���������� ��������
	Apple & operator++();

	// ����������� ��������
	Apple  operator++(int);
	
};

// �������� ��������� �� ��������� � ����������� ��� ������� �������.
bool operator !=(const Apple &a, const Apple &b);
bool operator ==(const Apple &a, const Apple &b);

// �������� < <=
bool operator <(const Apple &a, const Apple &b);
bool operator <=(const Apple &a, const Apple &b);

inline ostream & operator<<(ostream & os, const Apple & a)
{
	os << "����: ";
	switch (a.color())
	{
	case 0: os <<"Green  "; break;
	case 1: os << "Yellow  "; break;
	case 2: os << "Red  "; break;
	default:
		break;
	}
	os << "���: " << a.weight() << endl;
	return os;
};

#endif // !APPLE_H
