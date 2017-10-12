/*
source: https://stackoverflow.com/questions/5580761/why-use-double-pointer-or-why-use-pointers-to-pointers


*/
#include <stdio.h>
#include <stdlib.h>
void alloc2(int** p) {
   *p = (int*)malloc(sizeof(int));
   **p = 10;
}

void alloc1(int* p) {
   p = (int*)malloc(sizeof(int));
   *p = 10;
}

int main(){
   int *p;
   alloc1(p);
   printf("%d\n",*p);//value is undefined
   alloc2(&p);
   printf("%d\n ",*p);//will print 10
   free(p);
   return 0;
}
