cmake_minimum_required(VERSION 3.0)

project(myNN)

set(SOURCES 
    src/main.cpp)

include_directories(include)

add_subdirectory(lib/matrix)
add_subdirectory(lib/neuron)
add_subdirectory(lib/layer)
add_executable(${PROJECT_NAME} ${SOURCES}) 
target_link_libraries(${PROJECT_NAME} neuron)
target_link_libraries(${PROJECT_NAME} matrix)
target_link_libraries(${PROJECT_NAME} layer)
target_include_directories(${PROJECT_NAME} PUBLIC lib/layer/include) 