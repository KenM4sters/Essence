
add_executable(ExampleTest main.cpp)

target_include_directories(ExampleTest
    PUBLIC ${CMAKE_SOURCE_DIR}/External/GoogleTest/googletest/include/
)
target_link_libraries(ExampleTest Sources gtest_main)

add_test(
    NAME ExampleTest
    COMMAND ExampleTest
)

# Discover tests
include(GoogleTest)
gtest_discover_tests(ExampleTest)