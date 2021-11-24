# 指定最小 CMake 版本要求
cmake_minimum_required(VERSION 3.10)
# 设置项目名称
project(example6)

add_executable(${PROJECT_NAME} main.cpp)

include_directories(include)

add_library(libanswer OtherFile.cpp)

target_link_libraries(${PROJECT_NAME} libanswer)



# Mark executables and/or libraries for installation
install(
        TARGETS libanswer
        ARCHIVE DESTINATION lib
        LIBRARY DESTINATION lib
        RUNTIME DESTINATION bin
)

# Mark cpp header files for installation
install(
        DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/include/otherfile
        DESTINATION include
        FILES_MATCHING PATTERN "*.h"
)

# Mark other files for installation
install(
        DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/doc
        DESTINATION share
)

#[[install(
        EXPORT libanswer_target
        FILE libanswerConfig.cmake
        DESTINATION lib/cmake/libanswer)

include(CMakePackageConfigHelpers)

configure_package_config_file(
        libanswerConfig.cmake.in ${PROJECT_BINARY_DIR}/libanswerConfig.cmake
        INSTALL_DESTINATION lib/cmake/libanswer)

write_basic_package_version_file(
        libanswerConfigVersion.cmake
        VERSION ${PACKAGE_VERSION}
        COMPATIBILITY SameMajorVersion)

install(FILES "${PROJECT_BINARY_DIR}/libanswerConfig.cmake"
        "${PROJECT_BINARY_DIR}/libanswerConfigVersion.cmake"
        DESTINATION lib/cmake/libanswer)]]

#[[
使用如下命令构建本项目：
    mkdir build
    cd build
    cmake ..
    sudo make install
#]]

