#pragma once
#include"Error.h"
#include<iostream>
#include<string>
using namespace std;
class Complex
{
	double a, b;
public:
	void SetA(double);
	double GetA() const;
	void SetB(double);
	double GetB() const;
	Complex();
	Complex(double x, double y)throw(invalid_argument, bad_exception, Error, const char*);
	Complex(const Complex& v);
	virtual Complex* operator = (Complex* r);
	virtual Complex* operator + (Complex* Z);
	virtual Complex* operator - (Complex* Z);
	virtual Complex* operator * (Complex* Z);
	virtual Complex* operator / (Complex* Z);
	virtual bool operator == (Complex* Z);
	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);
	operator string() const;
	virtual ostream& Display(ostream& out) const;
	virtual istream& Conclusion(istream& in);
};

