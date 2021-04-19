//Error.h
#pragma once
#include <iostream>
#include <string>
using namespace std;
class Error
{
	string message;
public:
	Error(string s)
		: message(s)
	{}
	string what()  { return message; }
};
