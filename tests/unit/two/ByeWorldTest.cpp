#include <gtest/gtest.h>

#include "mylib/two/byeWorld.h"

TEST(ByeWorldTest, testNominal) {
    testing::internal::CaptureStdout();
    mylib::two::bye();
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "Bye, World!\n");
}
