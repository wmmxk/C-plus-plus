#include <stdio.h>
#include <stdlib.h>

void print(int arr[], int r_num);
int main()
{
  int arr[100];
  FILE *fin;
  int i = 0,retval;
  fin = fopen("./data/data.txt","r");
  while (!feof(fin))
        
        fscanf(fin, "%d",&arr[i++]);
  fclose(fin);

//int arr[3] = {0,1,20};
print(arr, 99);

return 0;
}

void print(int arr[], int r_num) {
   int i;
   for (i=0; i < r_num; i++) {
         printf("%d ",arr[i]);
   }
}

