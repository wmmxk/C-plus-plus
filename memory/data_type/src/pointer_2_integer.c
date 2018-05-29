#include <stdio.h>

int main() {

  int i=37;
	printf("the value of i is %d\n", i);
	int *p = &i;
	printf("The address of i is %p\n", p);
   /* If the code is compiled using 32 model, you see overflow when converting the pointer to an integer,
	 which means you see an negative integer. */
	printf("Show the address of i in decimal mode %ld\n", (long int)p);

	return 0;
}
