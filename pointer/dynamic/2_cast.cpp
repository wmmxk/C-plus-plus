#include <iostream>
using namespace std;

int main()
{

int value = 5;
void *voidPtr = &value;
 
//cout << *voidPtr << endl; // illegal: cannot dereference a void pointer
 
//int *intPtr = static_cast<int*>(voidPtr); // however, if we cast our void pointer to an int pointer...
 
int *intPtr = (int*) voidPtr; // however, if we cast our void pointer to an int pointer...
cout << *intPtr << endl; // then we can dereference it like normal

return 0;
}
