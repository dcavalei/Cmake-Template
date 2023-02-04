project(mylib)

# use this only for development, later you should explicitly list the source/header files
file(GLOB SOURCE_FILES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/*/*.cpp")
file(GLOB HEADER_FILES CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/../include/*.hpp")
# set(SOURCE_FILES <source_files_list>)
# set(HEADER_FILES <sources_files_list>)

message(STATUS "Source files: ${SOURCE_FILES}")
add_library(${PROJECT_NAME} STATIC ${SOURCE_FILES} ${HEADER_FILES})

# If you need to link to other libraries, uncomment the following line and add the library name
# target_link_libraries(${PROJECT_NAME} PRIVATE <some_library_name>)
target_include_directories(${PROJECT_NAME} INTERFACE "${CMAKE_CURRENT_SOURCE_DIR}/../include/")
target_include_directories(${PROJECT_NAME} PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../include/${PROJECT_NAME}")
