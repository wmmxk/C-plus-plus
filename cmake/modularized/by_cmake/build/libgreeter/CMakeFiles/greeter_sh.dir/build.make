# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/wxk/Git/C-plus-plus/cmake/modularized

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/wxk/Git/C-plus-plus/cmake/modularized/build

# Include any dependencies generated for this target.
include libgreeter/CMakeFiles/greeter_sh.dir/depend.make

# Include the progress variables for this target.
include libgreeter/CMakeFiles/greeter_sh.dir/progress.make

# Include the compile flags for this target's objects.
include libgreeter/CMakeFiles/greeter_sh.dir/flags.make

libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o: libgreeter/CMakeFiles/greeter_sh.dir/flags.make
libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o: ../libgreeter/src/greeter.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/wxk/Git/C-plus-plus/cmake/modularized/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o"
	cd /home/wxk/Git/C-plus-plus/cmake/modularized/build/libgreeter && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/greeter_sh.dir/src/greeter.c.o   -c /home/wxk/Git/C-plus-plus/cmake/modularized/libgreeter/src/greeter.c

libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/greeter_sh.dir/src/greeter.c.i"
	cd /home/wxk/Git/C-plus-plus/cmake/modularized/build/libgreeter && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/wxk/Git/C-plus-plus/cmake/modularized/libgreeter/src/greeter.c > CMakeFiles/greeter_sh.dir/src/greeter.c.i

libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/greeter_sh.dir/src/greeter.c.s"
	cd /home/wxk/Git/C-plus-plus/cmake/modularized/build/libgreeter && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/wxk/Git/C-plus-plus/cmake/modularized/libgreeter/src/greeter.c -o CMakeFiles/greeter_sh.dir/src/greeter.c.s

libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o.requires:

.PHONY : libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o.requires

libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o.provides: libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o.requires
	$(MAKE) -f libgreeter/CMakeFiles/greeter_sh.dir/build.make libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o.provides.build
.PHONY : libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o.provides

libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o.provides.build: libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o


# Object files for target greeter_sh
greeter_sh_OBJECTS = \
"CMakeFiles/greeter_sh.dir/src/greeter.c.o"

# External object files for target greeter_sh
greeter_sh_EXTERNAL_OBJECTS =

../output/lib/libgreeter_sh.so: libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o
../output/lib/libgreeter_sh.so: libgreeter/CMakeFiles/greeter_sh.dir/build.make
../output/lib/libgreeter_sh.so: libgreeter/CMakeFiles/greeter_sh.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/wxk/Git/C-plus-plus/cmake/modularized/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ../../output/lib/libgreeter_sh.so"
	cd /home/wxk/Git/C-plus-plus/cmake/modularized/build/libgreeter && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/greeter_sh.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
libgreeter/CMakeFiles/greeter_sh.dir/build: ../output/lib/libgreeter_sh.so

.PHONY : libgreeter/CMakeFiles/greeter_sh.dir/build

libgreeter/CMakeFiles/greeter_sh.dir/requires: libgreeter/CMakeFiles/greeter_sh.dir/src/greeter.c.o.requires

.PHONY : libgreeter/CMakeFiles/greeter_sh.dir/requires

libgreeter/CMakeFiles/greeter_sh.dir/clean:
	cd /home/wxk/Git/C-plus-plus/cmake/modularized/build/libgreeter && $(CMAKE_COMMAND) -P CMakeFiles/greeter_sh.dir/cmake_clean.cmake
.PHONY : libgreeter/CMakeFiles/greeter_sh.dir/clean

libgreeter/CMakeFiles/greeter_sh.dir/depend:
	cd /home/wxk/Git/C-plus-plus/cmake/modularized/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/wxk/Git/C-plus-plus/cmake/modularized /home/wxk/Git/C-plus-plus/cmake/modularized/libgreeter /home/wxk/Git/C-plus-plus/cmake/modularized/build /home/wxk/Git/C-plus-plus/cmake/modularized/build/libgreeter /home/wxk/Git/C-plus-plus/cmake/modularized/build/libgreeter/CMakeFiles/greeter_sh.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : libgreeter/CMakeFiles/greeter_sh.dir/depend
