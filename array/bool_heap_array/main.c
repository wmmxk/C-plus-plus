#include <stdlib.h>
#include <stdio.h>

main (){

// in c++, you need to explict type conversion, the malloc function returns a void *
bool * scores = (bool *)  malloc(3*sizeof(bool));
bool a1 = true;
bool a2 = false;

scores[0] = a1;

printf("score 1: %d", scores[0]);


	return 0;

}
