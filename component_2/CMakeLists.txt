cmake_minimum_required(VERSION 3.8)


# Select languages to minimize time for compiler testing
# don't forget to use project (to enable compiler testing and fail fast in case of issues)
project(component_1 LANGUAGES CXX)


message(">>>>>>>>>>> CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}/inc")
message(">>>>>>>>>>> CMAKE_SOURCE_DIR        : ${CMAKE_CURRENT_DIR}/inc")
message(">>>>>>>>>>> CMAKE_CURRENT_LIST_DIR  : ${CMAKE_CURRENT_LIST_DIR}/inc")

add_executable(my_component 
                ${CMAKE_CURRENT_SOURCE_DIR}/src/component_2.cpp
                ${CMAKE_CURRENT_SOURCE_DIR}/src/main.cpp)

target_include_directories(my_component 
    PUBLIC 
        ${CMAKE_CURRENT_SOURCE_DIR}/inc
)

target_link_libraries(my_component
    PRIVATE
        my_component_lib
)
