/*

When define a row pointer, you may have to declare the pointer as (*p)[columns] instead of just *p. So when do ++p, the comipler knows how many bytes to go through. An int variable takes 4 bytes. If column_num ==2, the row_pointer increase 8 bytes every time.

*/

#include <stdio.h>

int main(void) 
{
    int test[3][2] = { { 1,4 }, { 2,5 }, { 2,8 } };

    for ( int ( *p )[2] = test ; p != test + 3; ++p ) 
    {
        for ( int *q = *p; q != *p + 2; ++q ) printf( "%d ", *q );
        puts( "" );
    }

    return 0;
}   
