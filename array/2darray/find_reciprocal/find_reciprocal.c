/*
This code is composed of three layers of loop:
		The first layer is to populate each row
		The second layer is to compare the row in outer_layer to each row in the array
		The inner most layer is to print the row in the out_layer, which satisfies a condtion. 

The condition is that the reciprocal edge is also in the data. 

*/

#include <stdio.h>

int main(void) 
{   
    //int data[9][2]  = {{2,1}, {3,1}, {1,2},{4,2},{1,3},{3,3},{6,3},{2,4},{1,6}};
    int data[4][2] = { { 4,1 }, { 2,3 }, { 1,4 },{3,2} };
    //use an row_pointer to loop through the rows
    for ( int ( *p )[2] = data ; p != data +4; ++p ) 
    {
     
							for ( int (*p_i)[2] = data; p_i != data+4; ++p_i )
							{
												if ( **p == *(*p_i +1) && *(*p+1) == **p_i)
								{
									for ( int *q = *p; q != *p + 2; ++q  ) printf( "%d", *q  );
								 puts( ""  );
								}
							}
    }

    return 0;
}  
