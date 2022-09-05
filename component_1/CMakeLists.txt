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

set(INSTALL_INCLUDES
    ${CMAKE_CURRENT_SOURCE_DIR}/inc/component_1.hpp
)

#===================== Package configuraion ===================
set(COMPONENT_HEADER_DIR "my_component_lib")
configure_file(${CMAKE_CURRENT_LIST_DIR}/config/my_component_lib.pc.in
                ${PROJECT_BINARY_DIR}/my_component_lib.pc @ONLY
)

#=====================  Installation ===============================

include(GNUInstallDirs)

message("CMAKE_INSTALL_INCLUDEDIR   : ${CMAKE_INSTALL_INCLUDEDIR}")
message("CMAKE_INSTALL_LIBDIR       : ${CMAKE_INSTALL_LIBDIR}")


install(FILES ${INSTALL_INCLUDES} 
DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/my_component_lib
)

install(TARGETS my_component_lib 
LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
)

install(FILES ${PROJECT_BINARY_DIR}/my_component_lib.pc
DESTINATION ${CMAKE_INSTALL_LIBDIR}/pkgconfig
COMPONENT devel
)
