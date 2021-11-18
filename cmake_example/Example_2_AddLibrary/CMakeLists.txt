cmake_minimum_required(VERSION 3.10)
project(example2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-Wall -Werror)

# 添加 libanswer 库目标，STATIC 指定为静态库
add_library(libanswer STATIC OtherFile.cpp)
# 项目的名字(本例中为projectName) 和 ${PROJECT_NAME}等价
add_executable(${PROJECT_NAME} main.cpp)

# 为 projectName 可执行目标链接 libanswer
target_link_libraries(${PROJECT_NAME} libanswer)

#[[
使用如下命令构建本项目：
    cmake -B build      # 生成构建目录
    cmake --build build # 执行构建
    ./build/example2      # 运行 example2 程序
#]]
