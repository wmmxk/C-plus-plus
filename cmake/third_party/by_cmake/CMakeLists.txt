cmake_minimum_required (VERSION 3.6)
project (hello_gtk)

find_package (PkgConfig REQUIRED)
pkg_check_modules (GTK3 REQUIRED gtk+-3.0)

set (SOURCE_DIR ${CMAKE_SOURCE_DIR}/src)
set (HELLO_GTK_SOURCE ${SOURCE_DIR}/main.c)
set (EXECUTABLE_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/bin)

include_directories (${GTK3_INCLUDE_DIRS})
link_directories (${GTK3_LIBRARY_DIRS})
add_definitions (${GTK3_CFLAGS_OTHER})


add_executable (app ${HELLO_GTK_SOURCE})
target_link_libraries (app ${GTK3_LIBRARIES})
