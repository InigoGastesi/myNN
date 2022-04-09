cmake_minimum_required(VERSION 3.0)
project(nn)

set(SOURCES 
    src/matrix.cpp
    src/neuron.cpp
    src/layer.cpp
    include/matrix.hpp
    include/neuron.hpp
    include/layer.hpp)
    

add_library(${PROJECT_NAME} STATIC ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER include/matrix.hpp)
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER include/neuron.hpp)
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER include/layer.hpp)
target_include_directories(${PROJECT_NAME} PRIVATE include)
target_include_directories(${PROJECT_NAME} PRIVATE src)

target_link_libraries(${PROJECT_NAME} nn)
