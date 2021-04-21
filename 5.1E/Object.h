// Object.h 
#pragma once
#include "MyException.h"
class Object
{
	static unsigned int count;
public:
	static unsigned int Count()
	{
		return count;
	}
	Object()
	{count++;}
};