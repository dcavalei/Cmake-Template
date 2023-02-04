project(mocks)

add_library(mocks
        STATIC
        PrintMock.h
        )

target_include_directories(mocks INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})
set_target_properties(mocks PROPERTIES LINKER_LANGUAGE CXX)
