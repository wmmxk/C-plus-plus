#include<iostream>
using namespace std;
int main()
{
char * city = "San Jose";

cout <<"print a string by feeding a pointer pointed to it: \n"<< city<<"\n";

cout << "The address of the string: \n"
	    << (int *)city << "\n";


// when you feed an char address to cout, it will keep printing 
// characters in the memory block until seeing a NULL
cout << "The address of the 1st character in the string: (Unexpected)\n"
	    << &city[1] << "\n";



cout << "The address of the last character in the string: (city+8)\n"
	    << (int *)(city+8) << "\n";

//After your replace the NULL with another character, you will run into
//Segmentation fault, which indicates you are accessing memory that "does
//not belongs to you"
city[8]='a';

cout <<"print a string by feeding a pointer pointed to it: \n"<< city<<"\n";

cout <<"The second character in the string:\n"
				<< city[1]<<"\n";
return 0;

}
