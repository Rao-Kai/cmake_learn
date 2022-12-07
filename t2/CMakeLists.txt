cmake_minimum_required(VERSION 3.10)

project(hellocmake)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

include_directories("include")

add_library(hello src/hello.cpp)

add_executable(main src/main.cpp)
target_link_libraries(main hello)
