/*
 This code is show how to pass a string argument to a c++ code

 In specific, the input will read the file and display it

 How to run the execution:
 ./argc_argv test.txt
 
 */ 

#include <fstream>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
		if (argc !=2)
			cout <<"usage: "<< argv[0] << "< filename>\n";
		else {
			ifstream fin(argv[1]);
			if (!fin.is_open())
				cout << "Could not open file\n";
			else
			{
				char x;
				while (fin.get(x))
					cout << x;
			}
		}
}
