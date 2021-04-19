//Pair.h
#pragma once
#include <iostream>
#include <sstream>
#include "MyException.h"
using namespace std;
class Pair
{
	double f, s;
public:
	void SetF(double f) { this->f = f; }
	void SetS(double s) { this->s = s; }
	double GetF() const { return f; }
	double GetS() const { return s; }
	void Init(double value_x, double value_y)
	{
		f = value_x;
		s = value_y;
	}
	void Read();
	void Display();
	Pair();
	Pair(double, double);
	Pair(Pair&);
	friend bool operator > (Pair&, Pair&);
	friend bool operator < (Pair&, Pair&);
	friend bool operator == (Pair&, Pair&);
	operator string() const;
	friend ostream& operator << (ostream&, const Pair&);
	friend istream& operator >> (istream&, Pair&);
};
