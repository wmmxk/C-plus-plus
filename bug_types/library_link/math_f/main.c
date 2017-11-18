// without the -lm flat, the sin funcion can not be used
//how to compile
// gcc main.c -lm  

#include<stdio.h>
#include<math.h>

int main(void)
{

    double res = sin(1);
	printf("the result %f ",res);
}
