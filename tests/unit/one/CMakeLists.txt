project(one_test)

add_executable(
        hello_test
        HelloWorldTest.cpp
)

target_link_libraries(hello_test
        PRIVATE
        GTest::gtest_main
        mylib
        )

gtest_discover_tests(hello_test)
