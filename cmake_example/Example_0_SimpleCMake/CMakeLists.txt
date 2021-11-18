# 指定最小 CMake 版本要求
cmake_minimum_required(VERSION 3.10)
# 设置项目名称
project(example0)

add_executable(executableFile main.cpp OtherFile.cpp)

#[[
使用如下命令构建本项目：
    cmake -B build      # 生成构建目录
    cmake --build build # 执行构建
    ./build/executableFile      # 运行 executableFile 程序
#]]
