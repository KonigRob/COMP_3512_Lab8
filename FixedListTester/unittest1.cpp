#include "../COMP_3512_Lab8/FixedList.hpp"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace FixedListTester
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(get1)
		{
			FixedList<int, 4> fl;
			Assert::ExpectException<std::out_of_range>([&] {fl.get(1); });
		}
		TEST_METHOD(get2)
		{
			FixedList<int, 4> fl;
			fl.add(2);
			fl.add(4);
			Assert::AreEqual(4, fl.get(1));
		}
		TEST_METHOD(square1)
		{
			FixedList<int, 4> fl;
			fl.add(2);
			fl.add(4);
			Assert::AreEqual(4, fl[1]);
		}
		TEST_METHOD(square2)
		{
			FixedList<int, 4> fl;
			fl.add(2);
			fl.add(4);
			Assert::AreEqual(2, fl[0]);
		}
		TEST_METHOD(getFirstIndex1)
		{
			FixedList<int, 4> fl;
			fl.add(2);
			fl.add(4);
			Assert::AreEqual(0, fl.getFirstIndex(2));
		}
		TEST_METHOD(getFirstIndex2)
		{
			FixedList<int, 4> fl;
			fl.add(2);
			fl.add(4);
			Assert::AreEqual(1, fl.getFirstIndex(4));
		}
		TEST_METHOD(size1)
		{
			FixedList<int, 4> fl;
			fl.add(2);
			fl.add(4);
			Assert::AreEqual((size_t)2, fl.size());
		}
		TEST_METHOD(size2)
		{
			FixedList<int, 4> fl;
			Assert::AreEqual((size_t)0, fl.size());
		}
		TEST_METHOD(capacity1)
		{
			FixedList<int, 4> fl;
			Assert::AreEqual((size_t)4, fl.capacity());
		}
		TEST_METHOD(capacity2)
		{
			FixedList<int, 190> fl;
			Assert::AreEqual((size_t)190, fl.capacity());
		}
		TEST_METHOD(add1)
		{
			FixedList<int, 190> fl;
			Assert::IsTrue(fl.add(4));
		}
		TEST_METHOD(add2)
		{
			FixedList<int, 0> fl;
			fl.add(4);
			Assert::IsFalse(fl.add(1));
		}
		TEST_METHOD(remove1)
		{
			FixedList<int, 2> fl;
			fl.add(4);
			fl.add(2);
			Assert::AreEqual(2, fl.remove(2));
		}
		TEST_METHOD(remove2)
		{
			FixedList<int, 6> fl;
			fl.add(0);
			fl.add(42);
			fl.add(13);
			fl.add(6);
			fl.add(5);
			fl.add(3);
			Assert::AreEqual(NULL, fl.remove(2));
		}
	};
}