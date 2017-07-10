//The code is to illustrate the two meanings of the name of an array
//
#include <iostream>
using namespace std;
int main()
{
  int arr[3] = {1,2,3};

  cout <<"\n";		
		cout << "Adress of array: "
			    <<&arr 
							<< " = "
							<< "Address of the 1st element: "
							<< &arr[0]<<"\n\n";
  

		cout << "Adress of next block of memory (whole array): "
			    <<&arr+1 << "\n";
		cout << "! = "
							<< "Address of next block of memroy (element): "
							<< &arr[0]+1<<"\n\n";
  
  cout << "Address of the 2nd element in the array: arr+1\n"
			    << arr+1 << "\n\n";

 
  return 0;
}
