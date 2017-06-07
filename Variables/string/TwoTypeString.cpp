#include <iostream>
using namespace std;

int main()
{
 string str;
 cout << "Enter a line to store in a C++ string:";
 getline(cin,str);

 cout << "You entered: " << str << " stored in a c++ string" << endl;

// 
  char str_c[3];

  cout << "Enter a string (length less than 3): ";
  cin.get(str_c, 4);
  
  cout << "You entered: " << str_c <<" stored in a c-string"<< endl;

  cout << "C-strings are terminated with null character, that is \\0,\n so a string of 3 only stores two characters\n"; 
  return 0;

}
