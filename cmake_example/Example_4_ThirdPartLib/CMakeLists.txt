cmake_minimum_required(VERSION 3.10)
project(example4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-Wall -Werror)

#[[
find_package 用于在系统中寻找已经安装的第三方库的头文件和库文件
的位置，并创建一个名为 ${Boost_LIBRARIES} 的库目标，以供链接。

# 找到boost特定版本，以及需要的子模块，REQUIRED强调必须找到该模块，否则编译失败，COMPONENTS后面跟着必须有的组件；
# COMPONENTS后面罗列一组子模块（这些子模块都属于boost）
#]]
find_package(Boost REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
# 为 example4 可执行目标链接 libanswer 和 Boost库
target_link_libraries(${PROJECT_NAME} ${Boost_LIBRARIES})
# Indicate which libraries to include during the link process.
#[[
使用如下命令构建本项目：
    mkdir build
    cd build
    cmake ..
    make
    ./example4
#]]
