#include<iostream>

using namespace std;

int val = 100;

int main()

{
int val = 200;

cout << "\n The value of the global  Val is: " << ::val << "\n";
cout << "\n The value of the local Val is: " << val << "\n";
return 0;
}
