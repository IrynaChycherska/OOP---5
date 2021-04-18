//Point.h
#pragma once
#include "Pair.h"
class Point :public Pair
{
public:
	Point();
	Point(double, double); // конструктор ініціалізації
	Point(const Point&); // конструктор копіювання
	operator string() const;
	Point& operator ++();
	Point& operator --();
	Point operator ++(int);
	Point operator --(int);
	friend double operator * (Point& a, Point& m);
	~Point(void);
	void Init(double value_x, double value_y)
	{
		Pair::Init(value_x, value_y);
	}
	void Display()
	{
		cout << endl;
		cout << "f = " << endl;
		cout << "s = " << endl;
		Pair::Display();
	}
	void Read()
	{
		double n;
		double m;
		cout << endl;
		cout << "f = ? "; cin >> n;
		cout << "s = ? "; cin >> m;
		Init(n, m);
	}
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

