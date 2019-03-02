cmake_minimum_required(VERSION 3.6)
project(libgreeter VERSION 0.0)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/includes)

set(GREETER_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set(GREETER_SOURCE ${GREETER_SOURCE_DIR}/greeter.c)


add_library(greeter_sh SHARED ${GREETER_SOURCE})
add_library(greeter_st STATIC ${GREETER_SOURCE})

target_include_directories(greeter_sh PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/includes)
