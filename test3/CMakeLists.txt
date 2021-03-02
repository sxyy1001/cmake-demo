# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 项目信息
project (demo)
#aux_source_directory把当前目录下的源文件存列表存放到变量SRC_LIST里
aux_source_directory(. SRC_LIST)
#在add_executable里调用SRC_LIST（注意调用变量时的写法）
add_executable(main ${SRC_LIST})
