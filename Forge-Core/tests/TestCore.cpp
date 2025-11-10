#include <Forge-Core/Core.h>

#include <gtest/gtest.h>

namespace
{
    GTEST_TEST(CoreTest, Val)
    {
        Core::Core core;
        EXPECT_EQ(1, core.Val());
    }
}
