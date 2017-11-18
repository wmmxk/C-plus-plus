// C99, C++ allows declaration of variables anywhere in a block 
// so in for (), you can declare a local variable named i
// outside of the for i is still 9;
#include <stdio.h>

int main() {
  int i = 9;
  for (int i=0; i< 3; i++){
    int i = 20;
	++i;
	printf("%d\n",i);
  }
  printf("out side loop %d\n",i);


// if you use old C syntax: declare i outside the for loop
   int j =9;
   for (j=0; j< 3; j++){
	   int j= 4;
	   printf("j++ %d \n",j);
   }
   printf("out of loop %d\n",j);
}
