#include <gtest/gtest.h>
#include "main.h"

TEST(HashTest1, PositiveAdd) { 
    memset(tb, 0, sizeof(tb));
    ASSERT_EQ(1, add("Attract", "Charm"));
    ASSERT_EQ(1, add("Gather", "Collect"));
    ASSERT_EQ(1, add("Fundamental", "Essential"));
    ASSERT_EQ(1, add("Abundant", "Plentiful"));
    ASSERT_EQ(1, add("Achieve", "Accomplish"));
    ASSERT_EQ(1, add("Assign", "Allocate"));
    ASSERT_EQ(1, add("Surprise", "Amaze"));
    ASSERT_EQ(1, add("Assess", "Estimate"));
}

TEST(HashTest1, PositiveFind) { 
    char data[MAX_DATA];
    ASSERT_EQ(1, find("Attract", data));
    ASSERT_STREQ("Charm", data);
    ASSERT_EQ(1, find("Surprise", data));
    ASSERT_STREQ("Amaze", data);
    ASSERT_EQ(0, find("education", data));
}

TEST(HashTest2, PositiveAdd) { 
    memset(tb, 0, sizeof(tb));
    ASSERT_EQ(1, add("Bear", "Stand"));
    ASSERT_EQ(1, add("Famous", "Noted"));
    ASSERT_EQ(1, add("Characteristic", "Attribute"));
    ASSERT_EQ(1, add("Decrease", "Diminish"));
    ASSERT_EQ(1, add("Defect", "Flaw"));
    ASSERT_EQ(1, add("Depict", "Describe"));
    ASSERT_EQ(1, add("Eager", "Avid"));
    ASSERT_EQ(1, add("Flourish", "Thrive"));
    ASSERT_EQ(1, add("Huge", "Tremendous"));
    ASSERT_EQ(1, add("Important", "Crucial"));
}

TEST(HashTest2, PositiveFind) { 
    char data[MAX_DATA];
    ASSERT_EQ(0, find("treasure", data));
    ASSERT_EQ(1, find("Bear", data));
    ASSERT_STREQ("Stand", data);
    ASSERT_EQ(1, find("Defect", data));
    ASSERT_STREQ("Flaw", data);
    ASSERT_EQ(1, find("Huge", data));
    ASSERT_STREQ("Tremendous", data);
    ASSERT_EQ(0, find("hydrogen", data));
}

