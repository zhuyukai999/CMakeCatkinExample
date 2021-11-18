# 指定最小 CMake 版本要求
cmake_minimum_required(VERSION 3.10)
# 设置项目名称
project(example6)

add_executable(${PROJECT_NAME} main.cpp OtherFile.cpp)

add_library(${PROJECT_NAME}_core main.cpp OtherFile.cpp)

include_directories(include)



# Mark executables and/or libraries for installation
install(
        TARGETS ${PROJECT_NAME} ${PROJECT_NAME}_core
        ARCHIVE DESTINATION lib/example6
        LIBRARY DESTINATION lib/example6
        RUNTIME DESTINATION bin/example6
)

# Mark cpp header files for installation
install(
        DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/otherfile
        DESTINATION include/example6
        FILES_MATCHING PATTERN "*.h"
)

# Mark other files for installation
install(
        DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/doc
        DESTINATION share/example6
)


#[[install(TARGETS ${PROJECT_NAME}_core DESTINATION lib/example6)
install(FILES ${HEAD_FILES} DESTINATION include/example6)]]


#[[
使用如下命令构建本项目：
    cmake ..      # 生成构建目录
    sudo make install # 执行构建
#]]

