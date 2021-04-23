//Rectangle.cpp
#include "Rectangle.h"
#include"Pair.h"
#include"Error.h"
#include <iostream>
#include <sstream>
using namespace std;
void Rectangle::Init(double a, double b)
{
	Pair::Init(a, b);
}
void Rectangle::Display()
{
	cout << endl;
	cout << "a = " << endl;
	cout << "b = " << endl;
	Pair::Display();
}
void  Rectangle::Read()
{
	double n;
	double m;
	cout << endl;
	cout << "b = ? "; cin >> n;
	cout << "a = ? "; cin >> m;
	Init(n, m);
}
Rectangle::Rectangle()
	: Pair(0, 0)
{}
Rectangle::Rectangle(double a, double b)throw(invalid_argument, bad_exception, Error, const char*)
	:Pair(a, b)
{
	if (a < 0)
		throw invalid_argument("Invalid_argument");
	else if (b < 0)
		throw bad_exception();
	else if (a == 0)
		throw Error("Error");
	else if (b == 0)
		throw "Exception";
}
Rectangle::Rectangle(Rectangle& m)
	: Pair(m)
{}
Rectangle& Rectangle::operator = (Rectangle& m)
{
	Pair::operator=(m);
	return *this;
}
ostream& operator << (ostream& out, const Rectangle& m)
{
	out << string(m);
	return out;
}
istream& operator >> (istream& in, Rectangle& r) throw(invalid_argument, bad_exception, Error, const char*)
{
		double a;
		double b;
		cout << endl;
		cout << "a = ? "; in >> a;
		cout << "b = ? "; in >> b;
		r.setA(a); r.setB(b);
		cout << endl;
		if (a < 0)
			throw invalid_argument("Invalid_argument");
		else if (b < 0)
			throw bad_exception();
		else if (a == 0)
			throw Error("Error");
		else if (b == 0)
			throw "Exception";
		return in;

}
Rectangle::operator string ()const
{
	return Pair::operator std::string();
}
Rectangle::~Rectangle(void)
{}
double Rectangle::p()
{
	double a;
	double b;
	cout << endl;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	Init(a, b);
	double p = 2 * (a + b);
	return p;
}
double Rectangle::s()
{
	double a;
	double b;
	cout << endl;
	cout << "a = ? "; cin >> a;
	cout << "b = ? "; cin >> b;
	Init(a, b);
	double s = a * b;
	return s;
}
