#include <gtest/gtest.h>
#include "solution.h"

TEST(PlantGrowthTest, ExampleCase) {
    EXPECT_EQ(calculateDays(100, 10, 910), 10);
}

TEST(PlantGrowthTest, ReachesInOneDay) {
    EXPECT_EQ(calculateDays(100, 10, 100), 1);
    EXPECT_EQ(calculateDays(100, 10, 50), 1);
}

TEST(PlantGrowthTest, SmallGrowth) {
    EXPECT_EQ(calculateDays(10, 5, 50), 9);
}

TEST(PlantGrowthTest, NoNightDecrease) {
    EXPECT_EQ(calculateDays(10, 0, 100), 10);
}

TEST(PlantGrowthTest, LargeHeight) {
    EXPECT_EQ(calculateDays(5, 2, 10), 3);
}

TEST(PlantGrowthTest, ImpossibleCase) {
    EXPECT_EQ(calculateDays(5, 10, 100), -1);
    EXPECT_EQ(calculateDays(5, 5, 100), -1);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
