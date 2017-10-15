/*
How to compile the code:

			g++ -fopenmp -o main.exe main.c compare_array_row.c generate_print.c find_pairs_p.c

How to run the main.exe:
   main.exe an_int 

To do:
   include the header file for recippar function
			comment out the testing code in the end of the main function
			include the source code for the recippar function when compiling
	*/
#include "generate_print.h"
#include <stdlib.h>
#include "find_pairs_p.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
 int int_max = atoi(argv[1]);
 int N = int_max*(int_max-1);
 int ** data = generate_array(N,int_max);
 if (int_max < 10) print(data, N, 2);


	int res = recippar(data, N);
	   if (res == N/2)
				{
      printf("Success\n");
				}
				else 
				{
      printf("Fail\n");
				}
return 0;
}
