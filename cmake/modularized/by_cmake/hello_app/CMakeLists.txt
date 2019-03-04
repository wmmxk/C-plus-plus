cmake_minimum_required(VERSION 3.6)
project(hello_app VERSION 0.0)

set(HELLO_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(HELLO_SOURCES ${HELLO_SOURCE_DIR}/main.c)

add_executable(hello_app ${HELLO_SOURCES})
target_link_libraries(hello_app greeter_sh)
