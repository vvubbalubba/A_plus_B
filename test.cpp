#include "sum.h"
#include "sum.cpp"
#include <gtest/gtest.h>

TEST(sum, test1) { 
    ASSERT_EQ(3, sum(1, 2));
    ASSERT_EQ(4, sum(2, 2));
}

TEST(sum, test2) {
    ASSERT_EQ(5, sum(2, 2));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
