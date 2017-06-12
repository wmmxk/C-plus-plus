#include <iostream>
using namespace std;

int main()

{

int C[2][3] = {{2,3,4},{5,6,7}};

cout << "Print C: " << C <<endl;

cout << "Print *C: " << *C << " C[0] " << C[0] << " &C[0] " << &C[0]<< endl;
cout << "\n";
cout << "Pring C+1 " << C+1 << " &C[1] " << C[1] << endl;
cout << "*C[0] " << *C[0] << endl;
cout << "The first element of array C: " << C[0][0] << endl;

cout << "\n";
cout << "C+1 " << C+1 << " C[1] " << C[1] <<endl;
cout << "C[0]+1 " << C[0]+1 << " &C[0][1] "<<&C[0][1]<< endl;

cout << "\n";
cout <<"*C+1 " << *C+1 << endl;

int b = 2;
int *a = &b;
cout << "a is a pointer: " << a<<endl;
cout << "&b is an address: " << &b << endl;
cout << "*a is the content in the address a points to: " << *a<<endl;

cout << "&a is the address of the pointer: " << &a <<endl;
cout << "the next address block of a: " << a+1 << endl;
}
