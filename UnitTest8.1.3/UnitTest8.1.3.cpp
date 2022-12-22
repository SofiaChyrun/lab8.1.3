#include "pch.h"
#include "CppUnitTest.h"
#include "../ChurynSofia8.1.3/ChurynSofia8.1.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest813
{
	TEST_CLASS(UnitTest813)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			char str[10] = ".abd.hkv.";
			t = Count(str);
			Assert::AreEqual(t, 3);
		}
	};
}
