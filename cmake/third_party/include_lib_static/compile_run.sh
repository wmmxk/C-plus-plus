#!/bin/bash
# compile the source code for the lib to an object
cc -c -o ./lib/bin/mymath.o ./lib/src/mymath.c -I./lib/include 

#archive the binary to a library
ar -cvq libmymath.a ./lib/bin/mymath.o

# compile the main with the static libary
# -L specifies the path for the static library
# you did not figure out why relative or absolute path does not work
cc -o ./bin/main ./app/main.c -L. -lmymath -Ilib/include
./bin/main
