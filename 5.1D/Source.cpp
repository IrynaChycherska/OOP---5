//Source.cpp
#include<iostream>
#include"Point.h"
int main()
{
	Point c(3, 4);
	cout << "f = " << c.GetF() << endl;
	cout << "s = " << c.GetS() << endl << endl;
	Point a(0, 0);
	cout << "f = " << a.GetF() << endl;
	cout << "s = " << a.GetS() << endl;
	try
	{
		if (a.GetF() == 0 && a.GetS() == 0)
		{
			throw 1;
		}

		cout << a.GetF() << endl;
		cout << a.GetS() << endl;

	}
	catch (int thr)
	{
		cout << "Error " << thr << " Wrong arguments" << endl;
	}
	c.SetF(0);
	c.SetS(0);
	cout << "Vidstan(c) = " << a.Vidstan() << endl << endl;
	cout << "c++" << endl << c++ << endl;
	cout << "c--" << endl << c-- << endl;
	cout << "++c" << endl << ++c << endl;
	cout << "--c" << endl << --c << endl;
	cin.get();
	return 0;
}
