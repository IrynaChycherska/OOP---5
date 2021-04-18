//Time.cpp
#include "Time.h"
#include <sstream>
Time::Time()
{
	first = 0;
	second = 0;
}
Time::Time(int r = 0, int i = 0)
{
	first = r;
	second = i;

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
ostream& operator << (ostream& out, const Time& r)
{
	out << string(r);
	return out;
}
istream& operator >> (istream& in, Time& r)
{
	cout << " First = "; in >> r.first;
	cout << " Second = "; in >> r.second;
	cout << endl;

	return in;
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