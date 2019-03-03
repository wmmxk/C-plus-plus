#include <stdio.h>
#include "mymath.h"

int add(int a, int b) {
   int c;
   c = a + b;
   printf("%d + %d = %d\n", a, b, c);
   return c;
}

int multiply(int a, int b){
   int c;
   c = a * b;
   printf("%d * %d = %d\n", a, b, c);
   return c;
}
