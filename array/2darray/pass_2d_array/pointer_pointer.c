/*

	*/

#include <stdio.h>
#include <stdlib.h>

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


int main()
{

int r = 4, c = 2, i,j;
int ** arr = (int **) malloc(r * sizeof(int *));
for ( i=0; i<r; i++)
	   arr[i] = (int *) malloc(c * sizeof(int));

for (int i =0; i < r; i++)
{
	  for (int j = 0; j < c; j++)
			{
				  arr[i][j] = rand() % 10;
			}
}


print(arr, r, c);
return 0;
}


