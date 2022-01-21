cmake_minimum_required(VERSION 3.5)

project(
    archivers-tests
    VERSION 0.1
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

enable_testing()
find_package(GTest REQUIRED)

set(SOURCE_FILES test_check_dep_versions.cpp)

add_executable(archivers-tests ${SOURCE_FILES})
target_link_libraries(archivers-tests GTest::gtest GTest::gtest_main)

# add_test(AllTestsInArchivers archivers-tests)
