#include "add.h"
#include "gtest/gtest.h"
#include <stdio.h>

namespace {
    TEST(AddTest, Simple) {
      EXPECT_EQ(Add(1, 2), 3) << "This should not fail";
    }
}

GTEST_API_ int main(int argc, char **argv) {
    printf("Running main() from gtest\n");
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
