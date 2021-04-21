#include "pch.h"
#include "CppUnitTest.h"
#include"../5.1F/Error.h"
#include"../5.1F/Pair.h"
#include"../5.1F/Pair.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51F
{
	TEST_CLASS(UnitTest51F)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair c;
			Assert::IsTrue(c.dobutok() == c.getA() * c.getB());
		}
	};
}
