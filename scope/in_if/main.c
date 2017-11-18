// inside a block of if statement, you can declare a local variable.
// when declaring a local variable, you don't have to consider variables with the same name outside of this scope
#include <stdio.h>

int main() {
   int i = 9;
   if (i < 12) {
      int i = 20;
	  ++i;
	  printf("%d\n",i);
   }
   printf("out side if %d \n", i);
return 0;
}
