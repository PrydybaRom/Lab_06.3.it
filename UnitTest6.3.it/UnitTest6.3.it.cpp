#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	
		TEST_METHOD(TestMethod1)
		{

			int a = -5;
			int b = 5;
			const int SIZE = 20;

			int arr[SIZE];
			FullArr(arr, SIZE, a, b);
			int sumArr = SumNegitiveItem(arr, SIZE);

			Assert::AreEqual(sumArr, -18);

		}
	};
}
