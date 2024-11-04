#include <gtest/gtest.h>
#include "../include/main.h"

TEST(CheckTest, HandleCheck) {
 bool result = CHECK_EVEN(6);
 EXPECT_EQ(result, true);
}