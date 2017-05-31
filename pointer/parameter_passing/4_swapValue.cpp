#include <iostream>
using namespace std;

void swap(int *  A, int *  B);


int main()

{

int x, y;
x = 25;
y = 10;


cout<< "x before " << x << endl;

swap(&x, &y);

cout<< "x after " << x << endl;
}

void swap(int * A, int * B)
{

	int temp = * A;
 *A = *B;
	*B = temp;
} 
