# Copyright (C) Denys Valchuk - All Rights Reserved
# ZHZhbGNodWtAZ21haWwuY29tCg==

cmake_minimum_required(VERSION 3.23)

project(sfinae VERSION 0.0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 14)

option(WITH_TESTS "build tests?" ON)

add_library(sfinae INTERFACE)
target_include_directories(sfinae INTERFACE include)

if(WITH_TESTS)
  list(APPEND CMAKE_CTEST_ARGUMENTS "--output-on-failure")
  enable_testing()
  add_subdirectory(tests)
endif()
