#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1D/Pair.h"
#include "../5.1D/Pair.cpp"
#include"../5.1D/Point.h"
#include"../5.1D/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest51D
{
	TEST_CLASS(UnitTest51D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point a;
			Assert::IsTrue(a.Vidstan() == sqrt(a.GetF() * a.GetF() + a.GetS() * a.GetS()));
		}
	};
}
