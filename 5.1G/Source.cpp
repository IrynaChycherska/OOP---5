//Source.cpp
#include "Rectangle.h"
#include<iostream>
using namespace std;
int main()
{
	cout << "count = " << Object::Count() << endl;
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
		catch (Error& e) //�� ����������
		{
			Result = false;
			cout << e.what() << endl;
		}
		catch (const char* e) //�� ����������
		{
			Result = false;
			cerr << e << endl;
		}
	} while (!Result);
	cout << "p(s) = " << a.p() << endl;
	cout << "s(s) = " << a.s() << endl; cout << endl;
	cout << "count = " << Pair::Count() << endl;
	cout << "count = " << Rectangle::Count() << endl;
	return 0;
}
