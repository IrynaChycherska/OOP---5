//Source.cpp
#define _CRT_SECURE_NO_WARNINGS
#include "Point.h"
#include <iostream>
using namespace std;
int main()
{
	Point c(1, 2);
	cout << "X = " << c.GetX() << endl;
	cout << "Y = " << c.GetY() << endl << endl;
	Point a(0, 0);
	cout << "X = " << a.GetX() << endl;
	cout << "Y = " << a.GetY() << endl;
	c.SetX(0);
	c.SetY(0);
	try
	{
		if (a.GetX() == 0 && a.GetY() == 0)
		{
			throw 1;
		}
	
		cout << a.GetX() << endl;
		cout << a.GetY() << endl;

	}
	catch (int thr)
	{
		cout << "Error " << thr << " Wrong arguments" << endl;
	}
	
	cout << "Vidstan(c) = " << a.Vidstan() << endl << endl;
	char s[100];
	strcpy(s, c.VidstanToNumeral());
	cout << s << endl << endl;
	cout << "c++" << endl << c++ << endl;
	cout << "c--" << endl << c-- << endl;
	cout << "++c" << endl << ++c << endl;
	cout << "--c" << endl << --c << endl;
	return 0;
}
