#include <gtest/gtest.h>
#include "main.h"

TEST(RemoveDuplicationTest, Positive) { 
    int a[5] = {3, 1, 3, 2, 3};
    int b[5];
    ASSERT_EQ(0, remove_duplication(a, b));
}
