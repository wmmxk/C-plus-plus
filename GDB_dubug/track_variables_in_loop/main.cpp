/*

source:
		https://www.cprogramming.com/gdb.html
This code
		is to show how to use GDB to track the change of two variables in a while loop

How to run the gdb:
		g++ main.cpp -g -Wall -o main
		break n / replace n with the line number of the line: long factorial (int n)
		run
		step
		watch n
		watch result
		continue
		press enter to watch the change of the two varialbes alternately (if one varialbe is not changed, it will be skipped)

How to fix the bug:
		while(n>0) //doesn't let n reach 0
		{
		  result*=n;
		  n--;        //decrements only after the evaluation
		}

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
    long result=1;
    while(n--)
    {
        result*=n;
    }
    return result;
}
