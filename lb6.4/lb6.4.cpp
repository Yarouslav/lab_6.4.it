#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lb64
{
	TEST_CLASS(lb64)
	{
	public:
		TEST_METHOD(TestMethod1) {
			const int size = 2;
			int arr[size];
			create(arr, size);
			Assert::AreEqual(5, calculateSumOfSquares(arr, size), 0.00001);

		}
	};
}
