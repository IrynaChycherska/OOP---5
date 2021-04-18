//Source.cpp
#include"Time.h"
#include<iostream>
#include <string>
#include <exception>
#include <stdexcept>;

using namespace std;

int main()
{

	Time a(1, 0);
	cout << "first = " << a.GetFirst() << endl;
	cout << "second = " << a.GetSecond() << endl;

	try
	{
		if (a.GetFirst() == 0 )
		{
			throw 1;
		}
		if (a.GetSecond() == 0)
		{
			throw 2;
		}
		if (a.GetFirst() < 0)
		{
			throw 3;
		}
		if (a.GetSecond() < 0)
		{
			throw 4;
		}
		cout << a.GetFirst() << endl;
		cout << a.GetSecond() << endl;
	}
	catch (int thr)
	{
		cout << "Error " << thr << "  Incorrect parameters a and b" << endl;
	}
	cout << "a++" << a++ << endl;
	cout << "a--" << a-- << endl;
	cout << "++a" << ++a << endl;
	cout << "--a" << --a << endl;
	a.minutes(60);
	cout << "Result: " << endl;
	cout << a << endl;
	return 0;
}
