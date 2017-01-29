#include "../red7.h"

#include "gtest/gtest.h"

TEST(Red7, getCard) {
    // The red 7 card is this in binary
    red7::Card r7 = 0xb110110;

    auto r7Test = red7::getCard(7, 6);

    ASSERT_EQ(r7, r7Test);
}