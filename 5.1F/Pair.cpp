//Pair.cpp
#include "Pair.h"
#include<iostream>
#include<sstream>
#include<cmath>
#include<string>
using namespace std;
void Pair::Read()
{
	double c, d;
	cout << endl;
	cout << "a = ? "; cin >> c;
	cout << "b = ? "; cin >> d;
	Init(c, d);
}
void Pair::Display()
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}

Pair::Pair()
	: a(0), b(0)
{}

Pair::Pair(double x, double z)
{
	a = x;
	b = z;
}
Pair::Pair( Pair& m)
{
	*this = m;

}
Pair& Pair::operator =(Pair& m)
{
	a = m.a;
	b = m.b;
	return*this;
}

Pair::operator string () const
{
	stringstream ss;
	ss << endl;
	ss << "a = " << this->a << endl;
	ss << "b = " << this->b << endl;
	return ss.str();
}
Pair& Pair::operator ++ ()
{
	++a;
	return *this;
}
Pair& Pair::operator -- ()
{
	--a;
	return *this;
}
Pair Pair::operator ++ (int)
{
	Pair t(*this);
	a++;
	return t;
}
Pair Pair::operator -- (int)
{
	Pair t(*this);
	a--;
	return t;
}
ostream& operator <<(ostream& out, const Pair& m)
{
	out << string(m);
	return out;
}
istream& operator >>(istream& in, Pair& m)
{
	cout << endl;
	cout << ".a = ? "; in >> m.a;
	cout << ".b = ? "; in >> m.b;
	return in;
}
