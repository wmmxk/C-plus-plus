// how to compile
//    g++ -o row_pointer row_pointer.c
// how to run:
//    ./pointer_pointer 8 data.txt  8 is the number of rows in the file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print(int **arr, int r_num);
int main(int argc, char *argv[])
{
 

  int num = 0,i=0,j=0;
  int N = atoi(argv[1]);
  int **arr = (int**) malloc(N*sizeof(int*));
  for (i=0;i<N; i++)
		  arr[i] = (int*) malloc (2*sizeof(int));

  i=0;

		char file_path[100] = "./data/";
  strcat(file_path, argv[2]);


  FILE *fin;
  fin = fopen(file_path,"r");
  while (!feof(fin)) {
        fscanf(fin,"%d",&arr[i][j]);
        num++;
		i = num/2;
		j = num % 2;
  }
  fclose(fin);

//int arr[3][2] = {{0,1}, {12,13},{19,20}};
print(arr,N);
return 0;
}

void print(int **arr, int r_num) {
   int i, j;
     for (i=0; i < r_num; i++) {
             for (j =0; j < 2; j++) {
                        printf("%d ",arr[i][j]);
              }
               puts(" ");
              }
}

