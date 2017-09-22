/*
This code is to learn how to use GDB.
source: https://www.cprogramming.com/gdb.html

*/
#include<string>
#include<iostream>
 
using namespace std;
 
long factorial(int n);
 
int main()
{
    int n(0);
    cout <<"input a number ";			
    cin>>n;
    long val=factorial(n);
			 cout<<"factorial is "<<val<< endl;
    cin.get();
    return 0;
}
 
long factorial(int n)
{
    long result(1);
    while(n--)
    {
        result*=n;
    }
    return result;
}
