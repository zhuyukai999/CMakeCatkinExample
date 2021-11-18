cmake_minimum_required(VERSION 3.9)
project(example4)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-Wall -Werror)

#[[
find_package 用于在系统中寻找已经安装的第三方库的头文件和库文件
的位置，并创建一个名为 ${Boost_LIBRARIES} 的库目标，以供链接。

# 找到boost特定版本，以及需要的子模块，1.46.1为最低版本，REQUIRED强调必须找到该模块，否则编译失败，COMPONENTS后面跟着必须有的组件；

# COMPONENTS后面罗列一组子模块（这些子模块都属于boost）
find_package(Boost 1.46.1 REQUIRED COMPONENTS filesystem system)
#]]
find_package(Boost REQUIRED COMPONENTS atomic)

# 添加 libanswer 库目标，STATIC 指定为静态库
add_library(libanswer STATIC OtherFile.cpp)
add_executable(${PROJECT_NAME} main.cpp)

# 为 example4 可执行目标链接 libanswer 和 Boost库
target_link_libraries(${PROJECT_NAME} libanswer ${Boost_LIBRARIES})
# Indicate which libraries to include during the link process.
#[[
使用如下命令构建本项目：
    cmake -B build      # 生成构建目录
    cmake --build build # 执行构建
    ./build/example4      # 运行 example4 程序
#]]
