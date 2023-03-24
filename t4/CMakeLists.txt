cmake_minimum_required(VERSION 3.0)

project(FIRE)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -Wall") #-g代表包含调试信息 -O2代表代码优化 -g和-O2冲突
# set(CMAKE_BUILD_TYPE Debug)

include_directories(${CMAKE_SOURCE_DIR}/include)

add_executable(fire main.cpp src/Gun.cpp src/Solider.cpp)

