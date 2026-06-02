#include <gtest/gtest.h>
#include "logic.h"

TEST(Task5, ZeroCase) {
    EXPECT_FALSE(can_reach_from_one(343656009, 939617817));
}

TEST(Task5, BasicCase) {
    EXPECT_TRUE(can_reach_from_one(671088640, 939524096));
}

TEST(Task5, EdgeCases) {
    EXPECT_FALSE(can_reach_from_one(261897307, 784130655));
}