// This code illustrates two errors: 1. convert const int * to int * 2. change the value at an address which holds a const value
#include <iostream>

using namespace std;

int main()

{
 const int value =5 ;
 // invalid conversion from ‘const int*’ to ‘int*’ [-fpe
 //	int *ptr = &value;

 const int *ptr = &value;

	// you can not change the value at that address
 // *ptr = 6;

 return 0;
}
