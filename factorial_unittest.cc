#include "factorial.h"
#include "gtest/gtest.h"
#include<stdio.h>

namespace {
TEST(FactorialTest, Zero) {
  EXPECT_EQ(Factorial(0), 1) << "This should not fail";
}
}

GTEST_API_ int main(int argc, char **argv) {
  printf("Running main() from gtest_main.cc\n");
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
