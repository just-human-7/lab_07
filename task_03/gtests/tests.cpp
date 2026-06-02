#include <gtest/gtest.h>
#include "logic.h"

TEST(Task3, ExampleFromTask) {
    EXPECT_EQ(solveEquation("x=100"), "x=100");
}

TEST(Task3, SimpleCases) {
    EXPECT_EQ(solveEquation("-x=-1"), "x=1");
}

TEST(Task3, NoSolution) {
    EXPECT_EQ(solveEquation("-x=1"), "x=-1");
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}