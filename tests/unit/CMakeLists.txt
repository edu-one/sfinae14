# Copyright (C) Denys Valchuk - All Rights Reserved
# ZHZhbGNodWtAZ21haWwuY29tCg==

include(CMakePrintHelpers)

add_executable(sfinae_test sfinae_test.cpp)

find_package(GTest)
target_link_libraries(sfinae_test 
        PRIVATE sfinae
        gtest::gtest)

include(GoogleTest)
gtest_discover_tests(sfinae_test)
