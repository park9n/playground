#include <gtest/gtest.h>
#include "main.h"

#define MAX_BUFLEN 100

TEST(ReverseStringTest, Positive) {
    char buf[MAX_BUFLEN];
    ASSERT_STREQ("olleh", reverse(buf, "hello", strlen("hello")));
    ASSERT_STREQ("dlrow ,olleh", reverse(buf, "hello, world", strlen("hello, world")));
}
