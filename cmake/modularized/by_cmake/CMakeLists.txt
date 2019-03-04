cmake_minimum_required(VERSION 3.6)
project(hello VERSION 0.0)

set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/output/lib)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/output/bin)


add_subdirectory(libgreeter)
add_subdirectory(hello_app)
