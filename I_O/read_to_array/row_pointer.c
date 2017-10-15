// how to compile
//    g++ -o row_pointer row_pointer.c
// how to run:
//    ./row_pointer 8   , 8 is the number of rows in the file
#include <stdio.h>
#include <stdlib.h>

void print(int arr[][2], int r_num);
int main(int argc, char *argv[])
{
  
  int row_num = atoi(argv[1]);
  int arr[row_num][2];
  FILE *fin;
  int num = 0,i=0,j=0;
  fin = fopen("./data/data.txt","r");
  while (!feof(fin)) {
        fscanf(fin,"%d",&arr[i][j]);
        num++;
		printf("num %d ",num);
		i = num/2;
		j = num % 2;
  }
  fclose(fin);

//int arr[3][2] = {{0,1}, {12,13},{19,20}};
print(arr, row_num);
return 0;
}

void print(int arr[][2], int r_num) {
   int i, j;
     for (i=0; i < r_num; i++) {
             for (j =0; j < 2; j++) {
                        printf("%d ",arr[i][j]);
              }
               puts(" ");
              }
}

