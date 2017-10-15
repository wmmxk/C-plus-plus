#include "generate_print.h"
#include <stdlib.h> 
#include <stdio.h>
#include "compare_array_row.h"
int ** generate_array(int N, int int_max)
{
   int **arr = (int**) malloc(N * sizeof(int*));
			for (int i =0; i < N; i++)
				   arr[i] = (int*) malloc (2*sizeof(int));

            int r_index = 0;
			for (int i = 0; i < int_max; i++)
			{
		         for (int j =0; j < int_max;j++)                                                            
                        {                                                                                     
                           if (j==i) continue;                                                                
                           arr[r_index][0] = i;                                                           
                           arr[r_index][1] = j;
                           r_index++;						   
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

