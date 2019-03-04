#!/bin/bash

# compile the main and library at the same time.
cc ./app/main.c ./lib/src/mymath.c -I./lib/include/ -o ./bin/main
./bin/main
