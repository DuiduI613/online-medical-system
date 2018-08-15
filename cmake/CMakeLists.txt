cmake_minimum_required(VERSION 3.7)

project (medisys)

set (CMAKE_CXX_STANDARD 14)

include_directories(../include)

file(GLOB SRC ../src/*cpp)

add_executable(medisys.tsk ${SRC})

