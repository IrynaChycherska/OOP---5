//Point.cpp
#include "Point.h"
#include"Error.h"
#include <iostream>
#include <cmath>
#include <stdlib.h>
#include <string>
#include <sstream>
using namespace std;
Point::Point()
{
	x = 0; y = 0;
}
Point::Point(double a, double b)throw(invalid_argument, bad_exception, Error, const char*)
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
Point::Point(const Point& a)
{
	*this = a;
}
Point& Point::operator= (const Point& r)
{
	x = r.x;
	y = r.y;
	return *this;
}
Point::operator string() const
{
	stringstream ss;
	ss << "(" << x << ", " << y << ")";
	return ss.str();
}
void Point::Read()
{
	double a, b;
	cout << "Input complex value:" << endl;
	cout << " x = "; cin >> a;
	cout << " y = "; cin >> b;
	Init(a, b);
}
void Point::Display()
{
	cout << endl;
	cout << "x = " << GetX() << endl;
	cout << "y = " << GetY() << endl;
}
const char* Point::toString()
{
	stringstream sout;
	sout << x << " + i * " << y << endl;
	return sout.str().c_str();
}
double Point::Vidstan()
{
	return sqrt(x * x + y * y);
}
double  Point::Vidstan_do_pochatky()
{
	double x1 = 0.0;
	double y1 = 0.0;
	return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}
const char* Point::VidstanToNumeral()
{
	const char* _centuries[11] = { "", "sto",
	"dvisti", "trysta",
	"chotyrysta", "pjatsot",
	"schistsot", "simsot",
	"visimsot", "devjatsot",
	"tysiacha abo >" };
	const char* _decades[10] = { "", "",
	"dvadciat", "trydciat",
	"sorok", "pjatdesiat",
	"schistdesiat", "simdesiat",
	"visimdesiat", "devjanosto" };
	const char* _digits[20] = { "", "odyn",
	"dva", "try",
	"chotyry", "pjat",
	"schist’", "sim",
	"visim", "devjat",
	"desiat", "odynadciad’",
	"dvanadciad", "trynadciad",
	"chotyrnadciad", "pjatnadciad",
	"schistnadciad", "simnadciad",
	"visimnadciad", "devjatnadciad" };
	if (Vidstan() >= 1000)
		return _centuries[10];
	int vidstan = floor(Vidstan());
	int cen = vidstan / 100;
	vidstan = vidstan % 100;
	int dec = vidstan / 10;
	int dig;
	if (dec == 0 || dec == 1)
		dig = vidstan % 20;
	else
		dig = vidstan % 10;
	char s[100] = "";
	strcat_s(s, _centuries[cen]);
	strcat_s(s, " ");
	strcat_s(s, _decades[dec]);
	strcat_s(s, " ");
	strcat_s(s, _digits[dig]);
	return s;
}
Point& Point::operator++()
{
	++x;
	return *this;
}
Point& Point::operator--()
{
	--x;
	return *this;
}
Point Point::operator++(int)
{
	Point tmp = *this;
	y++;
	return tmp;
}
Point Point::operator--(int)
{
	Point tmp = *this;
	y--;
	return *this;
}
ostream& operator <<(ostream& out, const Point& x)
{
	out << string(x);
	return out;
}
istream& operator >>(istream& in, Point& r)
{
	double a;
	double b;
	cout << endl;
	cout << "x =  "; in >> a;
	cout << "y =  "; in >> b;
	r.SetX(a); r.SetY(b);
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
