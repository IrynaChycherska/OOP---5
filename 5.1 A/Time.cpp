//Time.cpp
#include "Time.h"
#include <sstream>
Time::Time()
{
	first = 0;
	second = 0;
}
Time::Time(int first = 0, int second = 0) 
{
	this->first = first;
	this->second = second;
}
Time::Time(const Time& r)
{
	first = r.first;
	second = r.second;
}
void Time::SetFirst(int r)
{
	first = r;
}
void Time::SetSecond(int i)
{
	second = i;
}
double Time::GetFirst() const
{
	return first;
}
double Time::GetSecond() const
{
	return second;
}
Time& Time::operator = (const Time& r)
{
	first = r.first;
	second = r.second;
	return *this;
}
Time::operator string () const
{
	stringstream ss;
	ss << " First = " << first << endl;
	ss << " Second = " << second << endl;
	return ss.str();
}
istream& operator >> (istream& in, Time& r) throw(invalid_argument, bad_exception, Error, const char*)
{
	cout << " First = "; in >> r.first;
	cout << " Second = "; in >> r.second;
	cout << endl;
	if (r.first < 0)
	    throw invalid_argument("Invalid_argument");
	else if (r.second < 0)
		throw bad_exception();
	else if (r.first == 0)
		throw Error("Error");
	else if (r.second == 0)
		throw "Exception";
	return in;
}
ostream& operator << (ostream& out, const Time& r)
{
	out << string(r);
	return out;
}
Time& Time::operator ++()
{
	first++;
	return *this;
}
Time& Time::operator --()
{
	first--;
	return *this;
}
Time Time::operator ++(int)
{
	Time t(*this);
	second++;
	return t;
}
Time Time::operator --(int)
{
	Time t(*this);
	second--;
	return t;
}
int Time::minutes(int h)
{
	first *= h;
	second = second;
	return first && second;
}