/*
source: 
	http://cs.baylor.edu/~donahoo/tools/gdb/tutorial.html

This code 
	is to learn the commands, next, step,br, print, in gdb dubugger when dubugging a project which has such a structure: main-fun1-fun2 (- means call)


How to run this code:
	Hint: You suspect the bug comes from the call to the function: ComputerFactorial(), so you need to set a breakpoint in the main fun where it is called, and then step into that function, and track or print the variables involved. When there is multiple layers of calling a function, you can use 'bt' command to know, to some extent, how you got here.
	commands:
		g++ -g main.cpp -o main
		gdb main
		b n /set a breakpoint n is the number of the line which call ComputerSeriesValue
		run
		step
		next
		n
		n
		s  // you have stepped into the function ComputeFactorial
		n
		n
		print fact //print . the print command (abbreviated p) reveals the value of fact never changes
        

 */


#include <iostream>
#include <cmath>

using namespace std;

int ComputeFactorial(int number) {
  int fact = 0;

  for (int j = 1; j <= number; j++) {
    fact = fact * j;
  }

  return fact;
}

double ComputeSeriesValue(double x, int n) {
  double seriesValue = 0.0;
  double xpow = 1;

  for (int k = 0; k <= n; k++) {
    seriesValue += xpow / ComputeFactorial(k);
    xpow = xpow * x;
  }

  return seriesValue;
}

int main() {
  cout << "This program is used to compute the value of the following series : " << endl;

  cout << "(x^0)/0! + (x^1)/1! + (x^2)/2! + (x^3)/3! + (x^4)/4! + ........ + (x^n)/n! " << endl;

  cout << "Please enter the value of x : " ;
  
  double x;
  cin >> x;

  int n;
  cout << endl << "Please enter an integer value for n : " ;
  cin >> n;
  cout << endl;

  double seriesValue = ComputeSeriesValue(x, n);
  cout << "The value of the series for the values entered is " 
	<< seriesValue << endl;

  return 0;
}
