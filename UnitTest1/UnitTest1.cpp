#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../lab_8.1(string)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCountCommas)
        {
            string str1 = "one,two,three,four";
            Assert::AreEqual(14, CountCommas(str1));

            string str2 = "alpha,beta,gamma,delta";
            Assert::AreEqual(17, CountCommas(str2));

            string str3 = "single";
            Assert::AreEqual(-1, CountCommas(str3));
        }

        

    };
}
