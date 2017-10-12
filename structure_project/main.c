/*
	
	how to compile
	gcc -o main.exe main.c helper.c
	*/

#include <stdlib.h>
#include <stdio.h>
#include "helper.h"

int main(void)
{
  int res;
  res = add(5,6);
  printf("%d\n",res);
}
