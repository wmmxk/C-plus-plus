#include "generate_print.h"
#include <stdlib.h> 
#include <stdio.h>
int ** generate_array(int N)
{
   int **arr = (int**) malloc(N * sizeof(int*));
			for (int i =0; i < N; i++)
				   arr[i] = (int*) malloc (2*sizeof(int));

			for (int i = 0; i < N; i++)
			{
       for (int j = 0; j < 2; j++)
							{
         arr[i][j]  = rand() % 10;
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

