# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 项目信息
project (demo)
#aux_source_directory(. SRC_LIST)
#add_executable(main ${SRC_LIST})

#include_directories (testFunc testFunc1)

aux_source_directory (testFunc SRC_LIST)
aux_source_directory (testFunc1 SRC_LIST1)

add_executable (main main.c ${SRC_LIST} ${SRC_LIST1})
