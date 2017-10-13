#include "generate_print.h"
#include <stdlib.h> 
#include <stdio.h>
#include "compare_array_row.h"
int ** generate_array(int N, int int_max)
{
   int **arr = (int**) malloc(N * sizeof(int*));
			for (int i =0; i < N; i++)
				   arr[i] = (int*) malloc (2*sizeof(int));

			bool equal;
			bool found;
   int quotient;
			int i,j;
			for (i = 0; i < N; i++)
			{
							quotient = i/int_max;
				   for (j =0; j < int_max;j++)
							{
			       if (j==quotient) continue;
										arr[i][0] = quotient;
										arr[i][1] = j;

										printf("%d col 2 ",arr[i][1]);
							}
			}
   return arr;
}


void  print(int ** arr, int r_num, int c_num)
{
	  int i, j;
			for (i=0; i < r_num; i++)
			{
							for (j =0; j < c_num; j++)
							{
											printf("%d ",arr[i][j]);
							}
							puts(" ");
			}
}

