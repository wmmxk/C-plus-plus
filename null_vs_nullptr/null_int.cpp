#include <iostream>
using namespace std;
 
// function with integer argument
int fun(int N)   { cout << "fun(int)\n"; }
 
// Overloaded function with char pointer argument
int fun(char* s)  { cout << "fun(char *)\n"; }
 
int main() 
{
// if you use fun(NULL) because NULL can be converted to an integer implicitly,  but it causes compiler error.
    fun(nullptr);  
}
