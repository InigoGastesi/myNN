cmake_minimum_required(VERSION 3.0)

project(myNN)

set(SOURCES 
    src/main.cpp)

include_directories(include)

add_subdirectory(lib/nn)
add_executable(${PROJECT_NAME} ${SOURCES}) 
target_link_libraries(${PROJECT_NAME} nn)
target_include_directories(${PROJECT_NAME} PUBLIC lib/nn/include) 