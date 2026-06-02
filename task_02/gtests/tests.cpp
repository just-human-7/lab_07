#include <gtest/gtest.h>
#include "logic.h"

TEST(Task2, BasicMovement) {
    EXPECT_TRUE(canReachTarget(2, 4, 7, 7, 6));
}

TEST(Task2, SamePoint) {
    EXPECT_TRUE(canReachTarget(1, 1, 3, 2, 4));
}

TEST(Task2, EdgeCases) {
    EXPECT_TRUE(canReachTarget(1, 1, 1, 1, 3));
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}