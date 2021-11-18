set (ENV{libanswer_INCLUDE_DIRS} "${CMAKE_CURRENT_SOURCE_DIR}/include")

add_library(libanswer STATIC src/OtherFile.cpp)

#[[
给 libanswer 库目标添加 include 目录，PUBLIC 使
这个 include 目录能被外部使用者看到。

当链接 libanswer 库时，这里指定的 include 目录会被
自动添加到使用此库的 target 的 include 路径中。
#]]
#target_include_directories(libanswer PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
include_directories(include)

target_compile_features(libanswer PRIVATE cxx_std_11)