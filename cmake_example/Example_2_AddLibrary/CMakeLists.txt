cmake_minimum_required(VERSION 3.10)
project(example2)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-Wall -Werror)

# 添加 libanswer 库目标，STATIC 指定为静态库
add_library(libanswer OtherFile.cpp)
# 项目的名字(本例中为projectName) 和 ${PROJECT_NAME}等价
add_executable(${PROJECT_NAME} main.cpp)
add_dependencies(${PROJECT_NAME} libanswer)
# 为 projectName 可执行目标链接 libanswer
target_link_libraries(${PROJECT_NAME} libanswer)

#[[
使用如下命令构建本项目：
    mkdir build
    cd build
    cmake ..
    make
    ./example2
#]]
