#include "Complex.h"
#include<sstream>
void Complex::SetA(double a = 0) { this->a = a; }
double Complex::GetA() const { return a; }
void Complex::SetB(double b = 0) { this->b = b; }
double Complex::GetB() const { return b; }
using namespace std;
Complex::Complex() : a(0), b(0) {}
Complex::Complex(double a = 0, double b = 0)throw(invalid_argument, bad_exception, Error, const char*)
{
	if (a < 0)
		throw invalid_argument("Invalid_argument");
	else if (b < 0)
		throw bad_exception();
	else if (a == 0)
		throw Error("Error");
	else if (b == 0)
		throw "Exception";
}
Complex::Complex(const Complex& v) : Complex(v.GetA(), v.GetB()) {}
Complex::operator string () const
{
	stringstream ss;
	ss << " a = " << GetA() << endl;
	ss << " b = " << GetB() << endl;
	return ss.str();
}
Complex* Complex::operator = (Complex* r)
{
	this->SetA(r->GetA());
	this->SetB(r->GetB());
	return this;
}
Complex* Complex::operator + (Complex* Z)
{
	Complex* T = new Complex(a+b);
	T->SetA(this->GetA() + ((Complex*)Z)->GetA());
	T->SetB(this->GetB() + ((Complex*)Z)->GetB());
	return T;
}
Complex* Complex::operator - (Complex* Z)
{
	Complex* T = new Complex(a-b);
	T->SetA(this->GetA() - ((Complex*)Z)->GetA());
	T->SetB(this->GetB() - ((Complex*)Z)->GetB());
	return T;
}
Complex* Complex::operator * (Complex* Z)
{
	Complex* T = new Complex(a*b);
	T->SetA(this->GetA() * ((Complex*)Z)->GetA() - this->GetB() * ((Complex*)Z)->GetB());
	T->SetB(this->GetA() * ((Complex*)Z)->GetB() + ((Complex*)Z)->GetA() * this->GetB());
	return T;
}
Complex* Complex::operator / (Complex* Z)
{
	Complex* T = new Complex(a/b);
	T->SetA((this->GetA() * ((Complex*)Z)->GetA() + this->GetB() * ((Complex*)Z)->GetB()) / (((Complex*)Z)->GetA() * ((Complex*)Z)->GetA() + ((Complex*)Z)->GetB() * ((Complex*)Z)->GetB()));
	T->SetB((((Complex*)Z)->GetA() * this->GetB() - this->GetA() * ((Complex*)Z)->GetB()) / (((Complex*)Z)->GetA() * ((Complex*)Z)->GetA() + ((Complex*)Z)->GetB() * ((Complex*)Z)->GetB()));
	return T;
}
bool Complex::operator == (Complex* Z)
{
	Complex* T = new Complex(a==b);
	return T->GetA() == ((Complex*)Z)->GetA() && T->GetB() == ((Complex*)Z)->GetB();
}
ostream& Complex::Display(ostream& out) const
{
	out << GetA() << " + i * " << GetB() << endl;
	return out;
}
istream& Complex::Conclusion(istream& in)
{
	double x, y;
	cout << "x = "; in >> x;
	cout << "y = "; in >> y;
	this->SetA(x); this->SetB(y);
	return in;
}
ostream& operator << (ostream& out, const Complex& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Complex& r)
{
	double a;
	double b;
	cout << endl;
	cout << "a =  "; in >> a;
	cout << "b =  "; in >> b;
	r.SetA(a); r.SetB(b);
	cout << endl;
	if (a < 0)
		throw invalid_argument("Invalid_argument");
	else if (b < 0)
		throw bad_exception();
	else if (a == 0)
		throw Error("Error");
	else if (b == 0)
		throw "Exception";
	return in;
}
