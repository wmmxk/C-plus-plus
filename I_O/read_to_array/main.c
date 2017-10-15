#include <stdio.h>
#include <stdlib.h>

void print(int arr[][2], int r_num);
int main()
{
  int arr[10][2];
  FILE *fin;
  int i = 0;
  fin = fopen("data.txt","r");
  while (!feof(fin))
        
        fscanf(fin,"%d %d",&arr[i][0], &arr[i][1]);
        i++;
  fclose(fin);

//int arr[3][2] = {{0,1}, {12,13},{19,20}};
print(arr, 10);

readFile();
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

