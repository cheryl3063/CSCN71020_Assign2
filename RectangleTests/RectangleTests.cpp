#include "pch.h"
#include "CppUnitTest.h"
extern "C" {
#include "../BCSRec/main.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecTests
{
    TEST_CLASS(RectangleTests)
    {
    public:

        TEST_METHOD(TestGetPerimeter)
        {
            // Arrange
            int length = 10;
            int width = 5;

            // Act
            int perimeter = getPerimeter(&length, &width);

            // Assert
            Assert::AreEqual(30, perimeter);  // 10 + 10 + 5 + 5 = 30
        }

        TEST_METHOD(TestGetArea)
        {
            // Arrange
            int length = 10;
            int width = 5;

            // Act
            int area = getArea(&length, &width);

            // Assert
            Assert::AreEqual(50, area);  // 10 * 5 = 50
        }
    };
}