cmake_minimum_required(VERSION 3.7)

project (medisys)

include_directories(../include)

file(GLOB SRC ../src/*cpp)

add_executable(medisys.tsk ${SRC})

