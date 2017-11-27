/*source: https://www.cprogramming.com/c++11/rvalue-references-and-move-semantics-in-c++11.html
 *
 *
 */
#include <iostream>
using namespace std;

  int x;
	int getInt(){
		return x;
	}

int && getRvalueInt(){
	return std::move(x);
}
	void printAddress(const int& v) {
		std::cout << & v  << std::endl;
	}
 

int main(){
	printAddress(getInt());
	printAddress(x);

	printAddress(getRvalueInt());
}
