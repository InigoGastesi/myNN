cmake_minimum_required(VERSION 3.0)
project(layer)

set(SOURCES 
    src/layer.cpp
    include/layer.hpp)
    

add_library(${PROJECT_NAME} STATIC ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER include/layer.hpp)
target_include_directories(${PROJECT_NAME} PRIVATE include)
target_include_directories(${PROJECT_NAME} PRIVATE src)

target_link_libraries(${PROJECT_NAME} neuron)
target_include_directories(${PROJECT_NAME} PUBLIC ../neuron/include) 