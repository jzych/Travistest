set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-lpthread")
set(CMAKE_CXX_FLAGS "-g -O0 --coverage")
cmake_minimum_required(VERSION 3.10)

project(TravisTest)

file(GLOB SOURCES
    inc/*.hpp
    src/*.cpp
)

add_executable(TravisTest ${SOURCES})
target_link_libraries(TravisTest pthread)
target_include_directories(TravisTest PRIVATE inc/)
target_compile_options(TravisTest PRIVATE -Wall -Werror -Wpedantic -Wextra)
