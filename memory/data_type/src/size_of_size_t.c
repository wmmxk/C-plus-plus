/* size_t is a short for size type. It is like a natural number in math, which is alwyas non-negative
 *
 *Look into the /usr/lib/gcc/x86_64-linux-gnu/5/include/stddef.h file, you will see,
 size_t is of long unsigned type.

 how to locate the stddef.h file? check which gcc you are using? gcc -v
 *
 *
 */





#include <stdio.h>

int main(){
  int i =0;
	size_t size = sizeof(i);
	unsigned long j = 3;
	/*  use zu not d specifier when print out a variable of size_t */
	printf("%zu bytes for an size_t\n", sizeof(size));
	printf("%zu bytes for an int\n", sizeof(i));
	printf("%zu bytes for an unsigned long\n", sizeof(j));
	return 0;
}
