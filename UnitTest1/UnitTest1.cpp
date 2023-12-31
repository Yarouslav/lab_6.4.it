﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lb64
{
	TEST_CLASS(lb64)
	{
	public:
		TEST_METHOD(TestMethod1) {
			const int SIZE = 2;
			int arr[SIZE];
			int MIN = -4;
			int MAX = 4;
			create(arr, SIZE, MIN, MAX);
			Assert::AreEqual(9, calculateSumOfSquares(arr, SIZE), 0.00001);
		}
	};
}
