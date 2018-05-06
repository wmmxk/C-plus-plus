#include <stdio.h>
#include <stdlib.h>
#include "AddNumbers.h"

int main(int argc, const char* argv[])
{
	if(argc == 3)
	{
		int a, b;
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		AddNumbers ab;
		ab.setA(a);
		ab.setB(b);
		printf("%d + %d = %d\n", ab.getA(), ab.getB(), ab.getSum());
	}
	else
	{
		printf("*** Error: Bad number of arguments (%d)\n", argc-1);
	}
	
	return 0;
}
