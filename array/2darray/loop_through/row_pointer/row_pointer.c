/*

This code is to show how to access each element in an array using a row pointer
  *(*p+i)  and  *(p[0]+i) both works but *(p[i]) is pointing to an address

*/

#include <stdio.h>

int main(void) 
{
    int test[3][2] = { { 1,4 }, { 2,5 }, { 2,8 } };

    for ( int ( *p )[2] = test ; p != test + 3; ++p ) 
    {
        for ( int i=0; i<2; ++i ) printf( "%d ", *(*p+i));
        puts( "" );
    }

    return 0;
}  
