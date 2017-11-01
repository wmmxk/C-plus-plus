/* 
	* source: 
	   http://www.learncpp.com/cpp-tutorial/4-8-the-auto-keyword/
 *  This code is to show 
    "When initializing a variable, the auto keyword can be used in place of the variable type to tell the compiler to infer the variable's type from the initializer's type

* how to compile:
  g++ -std=c++11 main.cpp

*/

#include <iostream>

int add(int x, int y) {
   return x+y;
}

int main() {

  auto sum = add(5,6);
		std::cout << "the sum is: " 
			         << sum
											 << "\n";

}
