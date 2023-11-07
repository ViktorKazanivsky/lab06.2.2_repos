#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab6.2.2/Lab_06_2.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{

			int n = 5;
			int a[] = { 10, 5, 30, -5, 15 };

			double expected_result = 18.333;
			double average = AverageEvenIndexedElements(a, n);

			Assert::AreEqual(expected_result, average, 0.001);
		}
	};
}
