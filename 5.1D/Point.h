//Point.h
#pragma once
#include "Pair.h"
class Point :public Pair
{
public:
	Point();
	Point(double, double); // конструктор ініціалізації
	Point(const Point&); // конструктор копіювання
	Point& operator ++();
	Point& operator --();
	Point operator ++(int);
	Point operator --(int);
	friend double operator * (Point& a, Point& m);
	double Vidstan()
	{
		double f;
		double s;
		cout << endl;
		cout << "f = ? "; cin >> f;
		cout << "s = ? "; cin >> s;
		Init(f, s);
		double p = sqrt(f * f + s * s);
		return p;
	}
};

