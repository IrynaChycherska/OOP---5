#include "pch.h"
#include "CppUnitTest.h"
#include"../5.1E/Object.h"
#include"../5.1E/Object.cpp"
#include"../5.1E/Point.h"
#include"../5.1E/Point.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51E
{
	TEST_CLASS(UnitTest51E)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point c(3, 4);
			Assert::IsTrue(c.Vidstan() == sqrt(c.GetX() * c.GetX() + c.GetY() * c.GetY()));
		}
	};
}
