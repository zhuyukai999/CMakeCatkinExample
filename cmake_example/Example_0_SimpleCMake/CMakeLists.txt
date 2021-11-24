# 指定最小 CMake 版本要求
cmake_minimum_required(VERSION 3.10)
# 设置项目名称
project(example0)
#生成可执行目标target
add_executable(executableFile main.cpp OtherFile.cpp)

#[[
使用如下命令构建本项目：
    mkdir build
    cd build
    cmake ..
    make
    ./executableFile
#]]
