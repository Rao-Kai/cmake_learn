cmake_minimum_required(VERSION 3.10)

project(hellocmake)

#不调是用下面这两句
# set( CMAKE_BUILD_TYPE "Release" )
#set( CMAKE_CXX_FLAGS "-O3" )

#调试用下面这句
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")
# set( CMAKE_BUILD_TYPE "Debug" ) # 这句也能调试

include_directories("include")

add_executable(hello src/hello.cpp)

