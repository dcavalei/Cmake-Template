#include <gtest/gtest.h>
#include "../../../src/two/print.h"

static constexpr std::string_view VICTIM_NAME = "This is the printer name";

class PrintTest : public ::testing::Test {
  public:
    void SetUp() override {
        victim = mylib::two::Print(VICTIM_NAME.data());
    }

  protected:
    mylib::two::Print victim;
};

TEST_F(PrintTest, test_print_stateless_nominal) {
    testing::internal::CaptureStdout();
    mylib::two::Print::print_stateless("Hello, Print!");
    ASSERT_EQ(testing::internal::GetCapturedStdout(), "Hello, Print!\n");
}

TEST_F(PrintTest, test_print_state_nominal) {
    testing::internal::CaptureStdout();
    victim.print_state("Hello, Print!");
    ASSERT_EQ(testing::internal::GetCapturedStdout(), std::string(VICTIM_NAME) +": Hello, Print!\n");
}
