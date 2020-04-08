#include <gtest/gtest.h>
#include "classA.hpp"

struct ClassATests : public ::testing::Test {
};

TEST_F(ClassATests, checkConstructorNoexception)
{
    classA a;
}
