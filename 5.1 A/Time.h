//Time.h
#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include"Error.h"
using namespace std;
class Time
{
	int first, second;
public:
	Time();
	Time(int, int);
	Time(const Time&);

	void SetFirst(int);
	void SetSecond(int);
	double GetFirst() const;
	double GetSecond() const;

	Time& operator = (const Time&);
	operator string() const;
	friend ostream& operator << (ostream&, const Time&);
	friend istream& operator >> (istream&, Time&);
	Time& operator ++();
	Time& operator --();
	Time operator ++(int);
	Time operator --(int);
	int minutes(int h);
};
