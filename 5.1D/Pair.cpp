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
Pair::Pair(double f = 0, double s = 0)
{
	SetF(f);
	SetS(s);
}
Pair::Pair(Pair& a)
	: f(a.f), s(a.s)
{}
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
istream& operator >> (istream& in, Pair& a)
{
	double f, s;
	cout << "Enter a value 1: "; in >> f;
	cout << "Enter a value 2: "; in >> s;
	a.SetF(f); a.SetS(s);
	return in;
}
Pair::operator string() const
{
	stringstream ss;
	ss << "First = " << f << endl;
	ss << "Second = " << s << endl;
	return ss.str();
}
