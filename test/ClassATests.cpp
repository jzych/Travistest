#include <gtest/gtest.h>
#include "classA.hpp"

struct ClassATests : public ::testing::Test {
};

TEST_F(ClassATests, checkConstructorNoexception)
{
    classA a;
}

TEST_F(ClassATests, checkSetFunction)
{
    classA a;
    a.set(5);
    ASSERT_EQ(a.get(), 5);
}
