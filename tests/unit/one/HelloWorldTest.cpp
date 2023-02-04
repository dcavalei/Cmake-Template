#include <gtest/gtest.h>

#include "mylib/one/helloWorld.h"

TEST(HelloWorldTest, testNominal) {
    testing::internal::CaptureStdout();
    mylib::one::hello();
    std::string output = testing::internal::GetCapturedStdout();
    ASSERT_EQ(output, "Hello, World!\n");
}
