cmake_minimum_required(VERSION 3.0)
project(nn)

set(SOURCES 
    src/matrix.cpp
    src/neuron.cpp
    src/layer.cpp
    src/nn.cpp
    include/matrix.hpp
    include/neuron.hpp
    include/layer.hpp
    include/nn.hpp)
    

add_library(${PROJECT_NAME} STATIC ${SOURCES})
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER include/matrix.hpp)
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER include/neuron.hpp)
set_target_properties(${PROJECT_NAME} PROPERTIES PUBLIC_HEADER include/layer.hpp)
target_include_directories(${PROJECT_NAME} PUBLIC include)
target_include_directories(${PROJECT_NAME} PRIVATE src)
