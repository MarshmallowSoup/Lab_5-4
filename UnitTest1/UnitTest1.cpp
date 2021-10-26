#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_5-4\Lab_5-4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a = S0(100);
			Assert::AreEqual(0, a);	
		}
		TEST_METHOD(TestMethod2)
		{
			int k = S1(100,100);
			Assert::AreEqual(0, k);
		}
		TEST_METHOD(TestMethod3)
		{
			int b = S2(100, 22);
			Assert::AreEqual(0, b);
		}
		
	};
}
