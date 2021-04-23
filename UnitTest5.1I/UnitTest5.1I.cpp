#include "pch.h"
#include "CppUnitTest.h"
#include"../5.1I/Object.h"
#include"../5.1I/Object.cpp"
#include"../5.1I/Point.h"
#include"../5.1I/Point.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;
namespace UnitTest51I
{
	TEST_CLASS(UnitTest51I)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point c;
			Assert::IsTrue(c.Vidstan() == sqrt(c.GetX() * c.GetX() + c.GetY() * c.GetY()));
		}
	};
}
