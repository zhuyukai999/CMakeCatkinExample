cmake_minimum_required(VERSION 3.10)
project(example5)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-Wall -Werror)

#[[
创建一个可配置的变量，可以由上级 CMakeLists 或 cmake 命令指定变量值。

在 cmake命令中通过 -D 参数传入。
#]]
#  变量名 默认值 cache变量 变量类型  变量描述
set(HELLO "" CACHE STRING "WolframAlpha APPID")

if(HELLO STREQUAL "")
    message(SEND_ERROR "HELLO must not be empty")
endif()

add_executable(${PROJECT_NAME} main.cpp OtherFile.cpp)

#[[
将 HELLO 添加到编译 .cpp 文件时的 definition 列表，从而
可在 C++ 代码中使用。
#]]
target_compile_definitions(${PROJECT_NAME} PRIVATE HELLO="${HELLO}")

#[[
使用如下命令构建本项目：
    cmake -B build -DHELLO=XXX          # 生成构建目录（建议更换 HELLO）
    cmake --build build                 # 执行构建
    ./build/example5                    # 运行 answer_app 程序
#]]
