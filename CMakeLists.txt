cmake_minimum_required(VERSION 3.22.0)

project(cmake_beginning VERSION 0.1.0 LANGUAGES C)

add_executable(cmake_beginning main.c)


cmake_minimum_required(VERSION 3.10)
project(MyProject)

set(CMAKE_CXX_STANDARD 11)

# 添加谷歌测试子目录
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# 添加子目录 src 和 tests
add_subdirectory(src)
add_subdirectory(tests)
