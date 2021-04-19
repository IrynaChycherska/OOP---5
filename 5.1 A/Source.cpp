//Source.cpp
#include"Time.h"
#include<iostream>
#include <string>
#include <exception>
#include <stdexcept>;

using namespace std;

int main()
{

	Time b(1, 0);
	cout << "first = " << b.GetFirst() << endl;
	cout << "second = " << b.GetSecond() << endl;
	Time a;
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
	cout << endl;
	a.minutes(60);
	cout << "Result: " << endl;
	cout << a << endl;
	cout << "a++" << a++ << endl;
	cout << "a--" << a-- << endl;
	cout << "++a" << ++a << endl;
	cout << "--a" << --a << endl;
	return 0;
}
