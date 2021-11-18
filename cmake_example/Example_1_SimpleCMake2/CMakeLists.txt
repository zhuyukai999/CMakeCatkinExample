# 指定最小 CMake 版本要求
cmake_minimum_required(VERSION 3.10)
# 设置项目名称
project(example1)
# 指定为C++14 版本
set(CMAKE_CXX_STANDARD 14)
# 设置指定的C++编译器版本是必须的，如果不设置，或者为OFF，则指定版本不可用时，会使用上一版本。
set(CMAKE_CXX_STANDARD_REQUIRED ON)
#通过添加 -Wall 和 -Werror，编译器不再忽略警告，强制执行更干净的代码。
add_definitions(-Wall -Werror)

#[[
CMake 会自动找到依赖的头文件，因此不需要特别指定，
当头文件修改的时候，会重新编译依赖它的目标文件。
#]]
add_executable(example1 main.cpp OtherFile.cpp)

#[[
使用如下命令构建本项目：
    cmake -B build      # 生成构建目录
    cmake --build build # 执行构建
    ./build/example1      # 运行 example1 程序
#]]
