//Point.cpp
#include "Point.h"
#include <iostream>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
#include <sstream>
using namespace std;
Point::Point() : Object() { x = 0, y = 0; }
Point::Point(double x = 0, double y = 0) throw(invalid_argument, bad_exception, MyException, const char*)
	: Object()
{
	if (x == 0 && y == 0 )
		throw invalid_argument("Invalid_argument");
	else if (x == 1 && y == 1 )
		throw bad_exception();
	else if (x == 2 && y == 2 )
		throw MyException("MyException");
	else if (x == 3 && y == 3 )
		throw "Exception";
	this->x = x;
	this->y = y;
}
Point::Point( Point& t) : Object()
{
	x = t.GetX();
	y = t.GetY();
}
Point& Point::operator = (const Point& t)
{
	x = t.x;
	y = t.y;
	return *this;
}
Point::operator string() const
{
	stringstream ss;
	ss << " X = " << x << endl;
	ss << " Y = " << y;

	return ss.str();
}
ostream& operator <<(ostream& out, const Point& t)
{
	out << string(t) << endl;
	return out;
}
istream& operator >>(istream& in, Point& t)throw(invalid_argument, bad_exception, MyException, const char*)
{
	cout << "Tochka x "; in >> t.x;
	cout << "Tochka y "; in >> t.y;
	cout << endl;
	if (t.x == 0 && t.y == 0)
		throw invalid_argument("Invalid_argument");
	else if (t.x == 1 && t.y == 1)
		throw bad_exception();
	else if (t.x == 2 && t.y == 2)
		throw MyException("MyException");
	else if (t.x == 3 && t.y == 3)
		throw "Exception";
	return in;
}
Point& Point::operator ++()
{
	x++;
	return *this;
}
Point& Point::operator --()
{
	x--;
	return *this;
}
Point Point::operator ++(int)
{
	Point t = *this;
	y++;
	return t;
}
Point Point::operator --(int)
{
	Point t = *this;
	y--;
	return t;
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
	"schist", "sim",
	"visim", "dev’jat",
	"desiat", "odynadciad",
	"dvanadciad", "trynadciad",
	"chotyrnadciad", "p’jatnadciad",
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
