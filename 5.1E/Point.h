//Point.h
#pragma once
#include "Object.h"
#include <iostream>
#include <string>
#pragma pack(1)
using namespace std;
class Point :public Object
{
private:
	double x;
	double y;
public:
	double GetX() { return x; }
	double GetY() { return y; }
	double Vidstan()
	{
		return sqrt(x * x + y * y);
	}
	void SetX(double value) { x = value; }
	void SetY(double value) { y = value; }
	Point();
	Point(double, double)throw(invalid_argument, bad_exception, MyException, const char*); // конструктор ініціалізації
	Point( Point&); // конструктор копіювання
	operator string() const;
	Point& operator ++();
	Point& operator --();
	Point operator ++(int);
	Point operator --(int);
	Point& operator = (const Point&);
	friend ostream& operator <<(ostream&, const Point&);
	friend istream& operator >>(istream&, Point&);
	const char* VidstanToNumeral();
};

