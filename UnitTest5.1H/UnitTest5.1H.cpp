#include "pch.h"
#include "CppUnitTest.h"
#include"../5.1H/Point.h"
#include"../5.1H/Point.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest51H
{
	TEST_CLASS(UnitTest51H)
	{
	public:
		TEST_METHOD(TestMethod1)
		{
			Point c;
			Assert::IsTrue(c.Vidstan() == sqrt(c.GetX() * c.GetX() + c.GetY() * c.GetY()));
		}
	};
}
