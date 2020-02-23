#include <gtest/gtest.h>
#include "main.h"

TEST(HeapTest1, PositivePush) { 
    heapInit();
    ASSERT_EQ(1, heapPush(10));
    ASSERT_EQ(1, heapPush(49));
    ASSERT_EQ(1, heapPush(38));
    ASSERT_EQ(1, heapPush(17));
    ASSERT_EQ(1, heapPush(56));
    ASSERT_EQ(1, heapPush(92));
    ASSERT_EQ(1, heapPush(8));
    ASSERT_EQ(1, heapPush(1));
    ASSERT_EQ(1, heapPush(13));
    ASSERT_EQ(1, heapPush(55));
}

TEST(HashTest1, PositivePushPop) { 
    int value;
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(1, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(8, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(10, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(13, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(17, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(38, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(49, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(55, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(56, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(92, value);
}

TEST(HashTest2, PositivePush) { 
    heapInit();
    ASSERT_EQ(1, heapPush(4));
    ASSERT_EQ(1, heapPush(22));
    ASSERT_EQ(1, heapPush(50));
    ASSERT_EQ(1, heapPush(13));
    ASSERT_EQ(1, heapPush(5));
    ASSERT_EQ(1, heapPush(1));
    ASSERT_EQ(1, heapPush(22));
    ASSERT_EQ(1, heapPush(35));
    ASSERT_EQ(1, heapPush(21));
    ASSERT_EQ(1, heapPush(7));
    ASSERT_EQ(1, heapPush(99));
    ASSERT_EQ(1, heapPush(100));
    ASSERT_EQ(1, heapPush(14));
}

TEST(HashTest2, PositiveFind) { 
    int value;
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(1, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(4, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(5, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(7, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(13, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(14, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(21, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(22, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(22, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(35, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(50, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(99, value);
    ASSERT_EQ(1, heapPop(&value));
    ASSERT_EQ(100, value);
}

