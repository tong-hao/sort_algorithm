cmake_minimum_required(VERSION 3.10)

project(sort_algorithm)
set(HOME ${CMAKE_CURRENT_SOURCE_DIR})

# 调试信息
set(CMAKE_CXX_FLAGS "-g")
set(CMAKE_VERBOSE_MAKEFILE ON)

# 设置可执行文件的存放目录
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${CMAKE_CURRENT_BINARY_DIR}/lib)

# 头文件搜索路径
INCLUDE_DIRECTORIES(
    ${PROJECT_SOURCE_DIR}/src
    /opt/vesoft/third-party/3.0/include
)
# 外部库的搜索路径
LINK_DIRECTORIES(
    /opt/vesoft/third-party/3.0/lib
    /opt/vesoft/third-party/3.0/lib64
)

set(GTEST_LIB
    gtest
    gtest_main
    pthread
)

# 用于make test
enable_testing()

add_subdirectory(src)
add_subdirectory(test)
