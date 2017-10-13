/*
	

How to compile the code:

			g++ -o main.exe main.c compare_array_row.c generate_print.c

How to run the main.exe:
  main.exe an_int  
	*/
#include "generate_print.h"
#include <stdlib.h>

int main(int argc, char *argv[])
{
 int int_max = atoi(argv[1]);
 int N = int_max*(int_max-1);
	int ** data = generate_array(N,int_max);
	print(data, N, 2);


return 0;
}
