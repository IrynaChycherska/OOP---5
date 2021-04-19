//Source.cpp
#include<iostream>
#include"Point.h"
int main()
{
	Point c(1,2);
	cout << "X = " << c.GetF() << endl;
	cout << "Y = " << c.GetS() << endl << endl;
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
	cout << "Vidstan(c) = " << a.Vidstan() << endl << endl;

	cout << "c++" << endl << c++ << endl;
	cout << "c--" << endl << c-- << endl;
	cout << "++c" << endl << ++c << endl;
	cout << "--c" << endl << --c << endl;
	return 0;

}
