set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_FLAGS "-lpthread")
cmake_minimum_required(VERSION 3.10)

project(TravisTest)

add_executable(TravisTest hw1_task3.cc)
target_link_libraries(TravisTest pthread)
target_compile_options(TravisTest PRIVATE -Wall -Werror -Wpedantic -Wextra)

