#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 8.2/Laba 8.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str[] = "dwgfuo  nfwihf";
			int t = maxCountSpaces(str);
			Assert::AreEqual(t, 2);
		}
	};
}
