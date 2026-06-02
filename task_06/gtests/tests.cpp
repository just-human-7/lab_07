#include <gtest/gtest.h>
#include "../logic.h"

TEST(Task6, Basic) {
    EXPECT_EQ(calculate("    99  "), 99);
}

TEST(Task6, WithParentheses) {
    EXPECT_EQ(calculate("(2)"), 2);
}

TEST(Task6, UnaryMinus) {
    EXPECT_EQ(calculate("-2+ 1"), -1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}