#**********************************************************
# Variables to control Makefile operation
CXX = g++
CXXFLAGS = -Wall -g

#**********************************************************
#Targets needed to bring the executable up to date
main: main.o Point.o Rectangle.o
	$(CXX) $(CXXFLAGS) -o main main.o Point.o Rectangle.o


main.o: main.cpp Point.h Rectangle.h
	$(CXX) $(CXXFLAGS) -c main.cpp

# make utility knows a .o file can be generated from their corresponding .cpp files
# We don't need any generation line since we set up the variables CXX and CXXFLAGS. Make will
# use them to figure out a compilation command.
#
Point.o: Point.h
Rectangle.o: Rectangle.h Point.h
