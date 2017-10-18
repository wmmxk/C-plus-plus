// source: https://stackoverflow.com/questions/17202178/c-qsort-with-dynamic-n-by-2-multi-dimensional-array
/*This code is show how to use qsort to sort rows in an 2d array defined by pointer to pointers
	
		1. The arguments of qsort:
		   a base pointer, which points to the start of a contiguous block of data
					the nubmer of elements in the block (In this case it is the nubmer of rows
					the size of one data member
					a function that compares two data values.
	2. The corresponding values for a pointer to pointer:
	    first, the array is an array of pointers: arr= {(int*), (int*),...,(int*)}
					the comparator function's arguments are two pointers to an element of the array. So you need to deference twice when building the comparator function, 
	
	
	
	*/

#include <stdio.h>
#include <stdlib.h>

int compare ( const void *pa, const void *pb ) {
	 // pa points to an element in the array. Each element itself is a pointer
		// so you need to cast the void pointer to (const int **) first, then deference the pointer to pointer, yielding an array. Finally compare the first element
    const int *a = *(const int **)pa;
    const int *b = *(const int **)pb;
    if(a[0] == b[0])
        return a[1] - b[1];
    else
        return a[0] - b[0];
}

int main(void){
    int **array;
    int number = 10;
    int i;

    array = malloc(number * sizeof(int*));
    for (i = 0; i < number; i++){
        array[i] = malloc(2 * sizeof(int));
        array[i][0] = rand()%20;
        array[i][1] = rand()%20;
    }
    for(i = 0;i < number;++i)
        printf("%2d, %2d\n", array[i][0], array[i][1]);

    printf("\n");

    qsort(array, number, sizeof array[0], compare);

    for(i = 0;i < number;++i)
        printf("%2d, %2d\n", array[i][0], array[i][1]);

    return 0;
}
