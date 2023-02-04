cmake_minimum_required(VERSION 3.14)

project(Cmake-Template-Library
        DESCRIPTION "Cmake Template for C++ Libraries"
        LANGUAGES CXX
        )

set(CMAKE_CXX_STANDARD 20)

OPTION(BUILD-TESTS "Build Tests" false)
OPTION(BUILD-EXAMPLES "Build Examples" false)

add_subdirectory(src)
add_subdirectory(lib)

if (BUILD-TESTS)
    message(STATUS "Building Tests")
    enable_testing()
    add_subdirectory(tests)
endif ()

if (BUILD-EXAMPLES)
    message(STATUS "Building Examples")
    add_subdirectory(examples)
endif ()
