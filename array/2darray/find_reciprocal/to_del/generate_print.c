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

			for (int i = 0; i < N; i++)
			{
							arr[i][0] = rand() % int_max;
							arr[i][1] = rand() % int_max;
							//check whether tail is equal to head in the row
       equal = true;
       while (equal)
							{
           equal = (arr[i][0] == arr[i][1]);
											if (!equal) break;
											arr[i][1] = rand() % int_max;
							}
				   //check from the second iteration
							if (i > 0)
							{
											found = true;
											while (found || equal) 
											{
             equal = (arr[i][0] == arr[i][1]);
													found = compare( arr, i, arr[i]);
													if (!found && !equal) break;
													arr[i][0] = rand() % int_max;
													arr[i][1] = rand() % int_max;

											}
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

