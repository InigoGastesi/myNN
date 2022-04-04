cmake_minimum_required(VERSION 3.0)
project(neuron)

set(SOURCES 
    src/neuron.cpp
    include/neuron.hpp)
    

add_library(${PROJECT_NAME} STATIC ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER include/neuron.hpp)
target_include_directories(${PROJECT_NAME} PRIVATE include)
target_include_directories(${PROJECT_NAME} PRIVATE src)

target_link_libraries(${PROJECT_NAME} matrix)
target_include_directories(${PROJECT_NAME} PUBLIC ../matrix/include) 

