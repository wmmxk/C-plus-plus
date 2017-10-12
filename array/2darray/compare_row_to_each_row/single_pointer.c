/*
	*This code is to compare a row to each row in a 2d array in an element wise way
	* To practice: 
	        pass an 2d array to a function. In fact, you just pass the address of the first element with the row_num and column_num
									The signature of the fuction is type *. (replace type with a specifi type in a secific situation)

									When you call the function, you can pass &arr[0][0] or (type *) arr (This is to cast the row pointer to a regular pointer)


	*/

#include <stdio.h>

bool  compare(int* arr, int r_num, int c_num, int * one_row);

int main()
{

int data[4][2] = { { 4,1 }, { 2,3 }, { 1,4 },{3,2} };
int row[2] = {4,1};
bool exist = compare(&data[0][0], 4, 2, row);
if (exist) 
{
	printf("Found\n");
}
else
{
	printf("Not found\n");
}


return 0;
}


bool compare(int * arr, int r_num, int c_num, int * one_row)
{
		int i, j;
	 bool res;

		for (i=0; i < r_num; i++)
		{
			 res = true;
    for (j =0; j < c_num; j++)
				{
					res = res && (*(one_row+j) == *( (arr+i*c_num)+j) );
				}
    if (res)  return res;

		}
  return res;

}
