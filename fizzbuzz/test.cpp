#include <gtest/gtest.h>
#include "main.h"

TEST(FizzBuzzTest, Positive) { 
    ASSERT_EQ(0, fizzbuzz(100));
}
