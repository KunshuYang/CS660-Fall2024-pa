get_filename_component(EXEC ${CMAKE_CURRENT_SOURCE_DIR} NAME)
file(GLOB_RECURSE CPP_TESTS "*_test.cpp")
add_executable(${EXEC} ${CPP_TESTS})
target_link_libraries(${EXEC} PRIVATE db GTest::gtest_main)

include(GoogleTest)
gtest_discover_tests(${EXEC})

# 指定要创建的可执行文件
add_executable(database_test database_test.cpp)

# 链接 Google Test 库
target_link_libraries(database_test gtest gtest_main)
include_directories(${PROJECT_SOURCE_DIR}/googletest/include)
