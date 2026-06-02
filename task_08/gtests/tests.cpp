#include <gtest/gtest.h>

#include "logic.h"

TEST(Task8, Square) {

    std::vector<std::vector<int>> trees = {
        {1,1},
        {1,2},
        {2,2},
        {2,1}
    };

    EXPECT_EQ(outerTrees(trees).size(), 4);
}

TEST(Task8, Triangle) {

    std::vector<std::vector<int>> trees = {
        {1,1},
        {2,2},
        {3,1}
    };

    EXPECT_EQ(outerTrees(trees).size(), 3);
}

TEST(Task8, InnerPoint) {

    std::vector<std::vector<int>> trees = {
        {1,1},
        {1,3},
        {3,3},
        {3,1},
        {2,2}
    };

    EXPECT_EQ(outerTrees(trees).size(), 4);
}