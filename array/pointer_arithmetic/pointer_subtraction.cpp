//The code is to illustrate a pointer has two properites, a coding indicating its loation on 
//the memory and an implicit propety indicating how many bytes each block takes
//
#include <iostream>
using namespace std;
int main()
{
  int arr[2] = {1,2};

  int * begin = arr;
		int * end =arr+2;

		cout << "end - begin = " 
			    << end-begin 
							<< "\n\n";


/* you will get an error: invalid operands of types ‘int (*)[2]’ and ‘int*’ to binary ‘operator-’
		cout << "&arr - begin = " 
			    << &arr -begin 
							<< "\n\n";

*/



  return 0;
}
