// This code is to illustrate a const pointer does not mean the pointer can not be changed

#include<iostream>
using namespace std;
int main()

{
 int arr[3] = {1,2,3};
 const int * begin = arr;
	int * end = arr+3;
 
	const int * pt;
	int total = 0;

	for (pt = begin; pt != end; pt++)
		   total = total + *pt;

 cout << "The sum of the array[1,2,3] is: "
		    << total 
						<< "\n\n";
 return 0;
}
