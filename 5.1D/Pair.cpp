//Pair.cpp
#include "Pair.h"
#include <sstream>
void Pair::Read()
{
	double a, b;
	cout << "Input complex value:" << endl;
	cout << " x = "; cin >> a;
	cout << " y = "; cin >> b;
	Init(a, b);
}
void Pair::Display()
{
	cout << endl;
	cout << "x = " << GetF() << endl;
	cout << "y = " << GetS() << endl;
}
Pair::Pair()
{
	SetF(0);
	SetS(0);
}
Pair::Pair(double first = 0, double second = 0) 
{
	SetF(first); SetS(second);
}
Pair::Pair(Pair& a)
{
	SetF(a.GetF());
	SetS(a.GetS());
}
bool operator > (Pair& a, Pair& m)
{
	return ((a.GetF() > m.GetF()) || (a.GetF() == m.GetF() && a.GetS() > m.GetS()) ||
		(a.GetF() == m.GetF() && a.GetS() == m.GetS()));
}
bool operator < (Pair& a, Pair& m)
{
	return ((a.GetF() < m.GetF()) || (a.GetF() == m.GetF() && a.GetS() < m.GetS()) ||
		(a.GetF() == m.GetF() && a.GetS() == m.GetS()));
}
bool operator == (Pair& a, Pair& m)
{
	return (a.GetF() == m.GetF() && a.GetS() == m.GetS());
}
ostream& operator << (ostream& out, const Pair& a)
{
	out << string(a);
	return out;
}
istream& operator >> (istream& in, Pair& t) throw(invalid_argument, bad_exception, MyException, const char*)
{
	cout << "Tochka x "; in >> t.f;
	cout << "Tochka y "; in >> t.s;
	cout << endl;
	if (t.f == 0 && t.s == 0)
		throw invalid_argument("Invalid_argument");
	else if (t.f == 1 && t.s == 1)
		throw bad_exception();
	else if (t.f == 2 && t.s == 2)
		throw MyException("MyException");
	else if (t.f == 3 && t.s == 3)
		throw "Exception";
	return in;
}
Pair::operator string() const
{
	stringstream ss;
	ss << "First = " << f << endl;
	ss << "Second = " << s << endl;
	return ss.str();
}
