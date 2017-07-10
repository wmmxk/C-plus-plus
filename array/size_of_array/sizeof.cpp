// This code is to show when you pass an arrayname to a funcion,
// you are passing the address of the first element, not the whole array
//
// 2. A pointer takes 8 bytes and an int takes 4 bytes. so sizeof(arr)/sizeof(arr[0] yields 2.
#include<iostream>

using namespace std;

int get_size(int arr[]);

int main()

{
int arr[4] = {1,2,3,4};
cout << "length of an array: " 
	    << sizeof(arr)/sizeof(arr[0])
					<< "\n\n";

int size;
size = get_size(arr);
cout << "size of array passing to a function: "
	    << size
					<< "\n\n";

int * pt = arr;
cout << "size of an int pointer: "
	    << sizeof(pt)
					<< "\n\n";
cout << "size of an int: "
	    << sizeof(arr[0])
					<< "\n\n";


cout << "The address of the first element, next whole array, next element \n"
	    << arr
					<<"\n"
					<< &arr+1
					<< "\n"
					<< arr+1
					<< "\n\n";

return 0;
}


int get_size( int arr[])
{

cout << "address of next pointer, a pointer takes 8 bytes: \n"
	    << &arr
					<< "\n"
					<< &arr+1
					<< "\n\n";
return sizeof(arr)/sizeof(arr[0]);

}
