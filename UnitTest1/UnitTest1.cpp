#include "pch.h"
#include "CppUnitTest.h"
#include"../5.1 A/Time.h"
#include"../5.1 A/Time.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time a(1,0);
			Assert::IsTrue(a.minutes(60) == (a.GetFirst()==a.GetFirst() * 60) && (a.GetSecond() == a.GetSecond()));
		}
	};
}
