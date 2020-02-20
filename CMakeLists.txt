set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "-lpthread")
cmake_minimum_required(VERSION 3.10)

project(TravisTest)
aux_source_directory(. SRC_LIST)
add_executable($(PROJECT_NAME) $(SRC_LIST))