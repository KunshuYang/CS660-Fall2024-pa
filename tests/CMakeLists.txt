include(FetchContent)

FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
FetchContent_MakeAvailable(googletest)

add_subdirectory(pa1)


# 添加可执行文件
add_executable(database_test database_test.cpp)

# 链接 Google Test 库
target_link_libraries(database_test gtest gtest_main)
