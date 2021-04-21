//Source.cpp
#define _CRT_SECURE_NO_WARNINGS
#include "Point.h"
#include <iostream>
using namespace std;
int main()
{
	cout << "Number of elements : " << Object::Count() << endl;
	Point c(1, 2);
	cout << "X = " << c.GetX() << endl;
	cout << "Y = " << c.GetY() << endl << endl;
	Point a;
	bool Result;
	do
	{
		try
		{
			Result = true;
			cin >> a;
		}
		catch (invalid_argument e)
		{
			Result = false;
			cout << e.what() << endl;
		}
		catch (bad_exception e)
		{
			Result = false;
			cout << e.what() << endl;
		}
		catch (MyException& e) //за посиланням
		{
			Result = false;
			cout << e.what() << endl;
		}
		catch (const char* e) //за вказівником
		{
			Result = false;
			cerr << e << endl;
		}
	} while (!Result);
	cout << endl;
	cout << "Vidstan(a) = " << a.Vidstan() << endl << endl;
	char s[100];
	strcpy(s, a.VidstanToNumeral());
	cout << s << endl << endl;

	cout << "c++" << endl << c++ << endl;
	cout << "c--" << endl << c-- << endl;
	cout << "++c" << endl << ++c << endl;
	cout << "--c" << endl << --c << endl;
	cout << "count = " << Point::Count() << endl;
	return 0;
}
