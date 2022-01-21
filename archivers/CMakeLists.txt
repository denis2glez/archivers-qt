cmake_minimum_required(VERSION 3.5)

project(
    archivers
    VERSION 0.1
    LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(LibArchive REQUIRED)

set(SOURCE_FILES archivers.h archivers.cpp)

add_library(archivers ${SOURCE_FILES})
target_link_libraries(archivers LibArchive::LibArchive)
