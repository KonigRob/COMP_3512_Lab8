#include "../COMP_3512_Lab8/FixedList.hpp"
#include "CppUnitTest.h"
#include <string>

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
			FixedList<std::string, 4> fl;
			fl.add("hello");
			fl.add("chris");
			Assert::AreEqual((std::string)"chris", fl.get(1));
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
			FixedList<std::string, 4> fl;
			fl.add("are");
			fl.add("you");
			Assert::AreEqual((std::string)"are", fl[0]);
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
			FixedList<std::string, 4> fl;
			fl.add("craving");
			fl.add("pickles");
			Assert::AreEqual(1, fl.getFirstIndex("pickles"));
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
			FixedList<std::string, 4> fl;
			Assert::AreEqual((size_t)0, fl.size());
		}
		TEST_METHOD(capacity1)
		{
			FixedList<int, 4> fl;
			Assert::AreEqual((size_t)4, fl.capacity());
		}
		TEST_METHOD(capacity2)
		{
			FixedList<std::string, 190> fl;
			Assert::AreEqual((size_t)190, fl.capacity());
		}
		TEST_METHOD(add1)
		{
			FixedList<int, 190> fl;
			Assert::IsTrue(fl.add(4));
		}
		TEST_METHOD(add2)
		{
			FixedList<std::string, 0> fl;
			fl.add("now?");
			Assert::IsFalse(fl.add("I think pickles on a pizza"));
		}
		TEST_METHOD(remove1)
		{
			FixedList<int, 2> fl;
			fl.add(4);
			fl.add(2);
			Assert::AreEqual(2, fl.remove(2));
		}
		/*
		This test doesn't work, and I'm not sure why.  Hopefully you can tell me when I see you next?  OR maybe my friday lab?
		TEST_METHOD(remove2)
		{
			FixedList<std::string, 6> fl;
			fl.add("might taste");
			fl.add("possibly good?");
			fl.add("Have you had");
			fl.add("pickled");
			fl.add("pizza?");
			fl.add(":)");
			Assert::AreEqual(NULL, fl.remove("PICKLESSSSSSSSS"));
		}*/
	};
}