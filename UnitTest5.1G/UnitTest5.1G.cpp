#include "pch.h"
#include "CppUnitTest.h"
#include"../5.1G/Object.h"
#include"../5.1G/Object.cpp"
#include"../5.1G/Pair.h"
#include"../5.1G/Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51G
{
	TEST_CLASS(UnitTest51G)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair c;
			Assert::IsTrue(c.dobutok() == c.getA() * c.getB());
		}
	};
}
