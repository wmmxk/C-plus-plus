/*
	This code is to show how to extract a row from a 2d array stored in a pointer to pointer
	
	*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int N = 5;
  int max_int = 10;
  int **arr = (int **)malloc(N* sizeof(int*));
  
  for (int i =0; i < N; i++) {
     arr[i] = (int *)malloc(2* sizeof(int));
  }

  for (int i = 0; i < N; i++) {
       for (int j =0; j < 2; j++) {
           arr[i][0]  = rand() % max_int;
           arr[i][1] = rand() % max_int;
       }
  }

  
  int *row = arr[0];
  printf("%d \n", row[0]);
  
  printf("%d \n", row[1]);
   

  return 0;
}
