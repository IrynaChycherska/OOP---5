//Rectangle.h
#pragma once
#include "Pair.h"
#include"Error.h"
using namespace std;
class Rectangle :public Pair
{
public:
	void Init(double a, double b);
	void Display();
	void Read();
	Rectangle();
	Rectangle(double, double)throw(invalid_argument, bad_exception, Error, const char*);
	Rectangle(Rectangle& m);
	~Rectangle(void);
	Rectangle& operator = (Rectangle& m);
	operator string ()const;
	friend ostream& operator << (ostream& out, const Rectangle& m);
	friend istream& operator >> (istream& in, Rectangle& m);
	double p();
	double s();
};
