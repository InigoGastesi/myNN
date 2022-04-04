cmake_minimum_required(VERSION 3.0)
project(matrix)

set(SOURCES 
    src/matrix.cpp
    include/matrix.hpp)

add_library(${PROJECT_NAME} STATIC ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER include/matrix.hpp)
target_include_directories(${PROJECT_NAME} PRIVATE include)
target_include_directories(${PROJECT_NAME} PRIVATE src)
