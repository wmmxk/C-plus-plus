#include <iostream>
#include <ctime>
 
using namespace std;
 
double vals[] = {10.1, 12.6, 33.1, 24.1, 50.0};
 
double& setValues( int i ) {
   return vals[i];   // return a reference to the ith element
}
 
// main function to call above defined function.
int main () {
 
   cout << "Value before change" << endl;
   cout << vals[1] << endl;
 
   setValues(1) = 20.23; // change 2nd element
 
   cout << "Value after change" << endl;
   cout << vals[1] << endl;

   cout << "What is return is an alias to a variable not an address:" << endl;
   cout <<  setValues(1) << "\n\n";

   cout << "The address of  the second element: \n\n";
   cout << vals+1
        << "\n\n";

   cout << " You can use deference operator to a return reference because it is an alias to a object not an expression" << endl;
   cout << &setValues(1) << "\n\n";   
   return 0;
}
