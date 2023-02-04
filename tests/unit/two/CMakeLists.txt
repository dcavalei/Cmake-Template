project(two_test)

add_executable(
        bye_test
        PrintTest.cpp
        ByeWorldTest.cpp
)

target_link_libraries(bye_test
        PRIVATE
        GTest::gtest_main
        mylib
        )

gtest_discover_tests(bye_test)
