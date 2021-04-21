//Source.cpp
#include "Rectangle.h"
#include<iostream>
#include <exception>
#include <stdexcept>;
#include "Error.h"
#include"Pair.h"
using namespace std;
int main()
{
	Pair z;
	z.Init(3, 4);
	z.Display();
	cout << "change:" << endl;
	z.setA(5);
	z.setB(6);
	z.Display();
	cout << "dobutok(z) = " << z.dobutok() << endl << endl;
	cout << "++z : " << ++z << endl;
	cout << "--z : " << --z << endl;
	cout << "z++ : " << z++ << endl;
	cout << "z-- : " << z-- << endl;
	Rectangle a;
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
		catch (Error& e) //за посиланням
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
	cout << "p(s) = " << a.p() << endl;
	cout << "s(s) = " << a.s() << endl;
	cout << endl;

	return 0;
}
