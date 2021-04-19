//Point.cpp
#include "Point.h"
#include "Pair.h"
using namespace std;
Point::Point()
	: Pair(0., 0.)
{}
Point::Point(double f, double s)
	: Pair(f, s)
{}
Point::Point(const Point& a)
	: Pair(a.GetF(), a.GetS())
{}
Point& Point::operator ++()
{
	this->SetF(this->GetF() + 1);
	return *this;
}
Point& Point::operator --()
{
	this->SetF(this->GetF() - 1);
	return *this;
}
Point Point::operator ++(int)
{
	Point t(*this);
	this->SetF(this->GetF() + 1);
	return t;
}
Point Point::operator --(int)
{
	Point t(*this);
	this->SetF(this->GetF() - 1);
	return t;
}
double operator * (Point& a, Point& m)
{
	Point t(a.GetF() * m.GetF(), a.GetS() * m.GetS());
	return sqrt(t.GetF() + t.GetS());
}
