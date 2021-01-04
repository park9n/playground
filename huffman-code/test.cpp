#include <gtest/gtest.h>
#include "main.h"

TEST(RemoveDuplicationTest, Positive) { 
    int a[5] = {3, 1, 3, 2, 3};
    int b[5];
    ASSERT_EQ(0, remove_duplication(a, b));
    ASSERT_EQ(1, b[0]);
    ASSERT_EQ(2, b[1]);
    ASSERT_EQ(3, b[2]);
}
