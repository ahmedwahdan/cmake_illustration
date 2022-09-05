cmake_minimum_required(VERSION 3.8)

project(health_manager LANGUAGES CXX)

#add_subdirectory(component_1)
add_subdirectory(component_2)


# The include directories are added to the INCLUDE_DIRECTORIES directory property for the current CMakeLists file.
# They are also added to the INCLUDE_DIRECTORIES target property for each target in the current CMakeLists file. 

include_directories(${CMAKE_SOURCE_DIR}/component_1/inc)

add_subdirectory(component_3)


set(MY_CACHE_VAR ON CACHE BOOL "Description of the variable")
option(MY_OPTION "On or off" OFF)
