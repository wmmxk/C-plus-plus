/*
	*This code is to compare a row to each row in a 2d array in an element wise way
Inputs: 
     use pointer to pointer to generate a 2d array
     use a pointer to slice a row from the array

operation:
     compare the row to the rows in the array. If an identical row is found, return true, otherwise return false


	*/

#include <stdio.h>
#include <stdlib.h>


int ** generate_array(int N, int int_max = 10);
bool  compare(int ** arr, int r_num, int * one_row);

int main()
{
		int N = 5;
		int ** data = generate_array(N);
		int * check_row = data[0];
		bool exist = compare(data, 4, data[0]);
		if (exist) 
		{
					printf("Found\n");
		}
		else
		{
					printf("Not found\n");
		}


		return 0;
}




int ** generate_array(int N, int int_max ) {
		 int **arr = (int**)malloc(N * sizeof(int*));

			for (int i = 0; i < N; i++) {
			   	arr[i] = (int*) malloc(2 * sizeof(int));
			}
			for (int i = 0; i < N; i++) {
							for (int j = 0; j < 2; j++) {
										arr[i][0] = rand() % int_max;
										arr[i][1] = rand() % int_max;
				}
			}

			return arr;
}



bool compare(int ** arr, int r_num, int * one_row)
{
	 bool res;

		for (int i=0; i < r_num; i++)
		{
			 res = true;
				res = res && (*one_row == arr[i][0]) && (*(one_row+1) == arr[i][1]);
    if (res)  return res;
		}
  return res;

}
