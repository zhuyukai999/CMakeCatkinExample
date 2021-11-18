cmake_minimum_required(VERSION 3.10)
project(example3)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-Wall -Werror)

# 添加 Folder 子目录
add_subdirectory(Folder)

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} libanswer)

#[[
message 可用于打印调试信息或错误信息，除了 STATUS
外还有 DEBUG WARNING SEND_ERROR FATAL_ERROR 等。
#]]

message(STATUS "libanswer_INCLUDE_DIRS: $ENV{libanswer_INCLUDE_DIRS}")
include_directories($ENV{libanswer_INCLUDE_DIRS})

#[[
使用如下命令构建本项目：

    cmake -B build      # 生成构建目录
    cmake --build build # 执行构建
    ./build/example3  # 运行 example3 程序
#]]
