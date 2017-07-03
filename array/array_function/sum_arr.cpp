//This code is to illustrate the formal variable representing the
// an array is the address of the first element  but not the whole array
// source is P324 of Primer Plus
//
#include <iostream>
const int Arsize =8;

int sum_arr(int arr[], int n);

int main()
{

int cookies[Arsize] = {1,2,3,4,5,6,7,8};

std::cout << sizeof cookies << "== sizeof the cookies (the array)\n";

int sum = sum_arr(cookies,Arsize);

}

int sum_arr(int arr[], int n)
{
  int total = 0;
		std::cout << sizeof arr << " = size of arr (the first element)\n";
  return total;
}
