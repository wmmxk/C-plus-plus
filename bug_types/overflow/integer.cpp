/*
first get the bytes number to store an integer
then get the maximum

 */

#include <iostream>
#include <cmath>
int main()
{
  int i=0;
  std::cout << "bytes number of an integer on your PC "
		    << sizeof(i)
            << "\n";
  int num_byte = sizeof(i);

  std::cout << "maximum allowed integer "
		   << std::fixed
		   << pow(2,num_byte*8)-1
		   << "\n";
  return 0;

}
