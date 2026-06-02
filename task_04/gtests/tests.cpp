#include <gtest/gtest.h>
#include "logic.h"

TEST(Task4, Example) {
    std::vector<std::string> times = {"09:00", "10:30", "09:45"};
    EXPECT_EQ(minTimeDifference(times), 45);   // исправлено
}

TEST(Task4, SimpleCases) {
    std::vector<std::string> t1 = {"00:00", "00:01"};
    EXPECT_EQ(minTimeDifference(t1), 1);

    std::vector<std::string> t2 = {"23:59", "00:00"};
    EXPECT_EQ(minTimeDifference(t2), 1);
}

TEST(Task4, MultipleTimes) {
    std::vector<std::string> times = {"10:00", "10:05", "10:10", "09:55"};
    EXPECT_EQ(minTimeDifference(times), 5);
}

TEST(Task4, EdgeCase) {
    std::vector<std::string> times = {"12:00"};
    EXPECT_EQ(minTimeDifference(times), 0);
}

TEST(Task4, SameTime) {
    std::vector<std::string> times = {"14:30", "14:30", "15:00"};
    EXPECT_EQ(minTimeDifference(times), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}