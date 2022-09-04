cmake_minimum_required(VERSION 3.8)

project(component_1 LANGUAGES CXX)


message(">>>>>>>>>>> CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}/inc")
message(">>>>>>>>>>> CMAKE_SOURCE_DIR        : ${CMAKE_CURRENT_DIR}/inc")
message(">>>>>>>>>>> CMAKE_CURRENT_LIST_DIR  : ${CMAKE_CURRENT_LIST_DIR}/inc")

add_library(my_component_lib ${CMAKE_CURRENT_SOURCE_DIR}/src/component_1.cpp)

target_include_directories(my_component_lib 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
)
