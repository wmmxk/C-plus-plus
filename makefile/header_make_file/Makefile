maketest : maketest.o apples.o things.o
	g++ maketest.o apples.o things.o -o maketest
maketest.o : maketest.cpp apples.h things.h
	g++ -c -Wall maketestcpp
apples.o : apples.cpp things.h apples.h
	g++ -c -Wall apples.cpp

things.o : things.cpp things.h
	g++ -c -Wall things.cpp
