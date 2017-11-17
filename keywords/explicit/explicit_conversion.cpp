/*source: http://www.geeksforgeeks.org/g-fact-93/
The code differs from the implicit version in two places:
1. add explicity keyword before the constructor
2. explicty convert a nubmer to complex number: (Complex) 3.0
*/
#include <iostream>
using namespace std;
class Complex {
  private:
			  double real;
					double imag;
		public:
					explicit Complex(double r= 0.0, double i = 0.0) : real(r), imag(i) {}
					bool operator==(Complex rhs) {
          return (real == rhs.real && imag == rhs.imag)? true:false;
					}
};

int main()
{
 Complex com1(3.0,0.0);

	if (com1 == (Complex)3.0)
		  cout << "Same \n";
	else
		  cout << "Not Same\n";
 return 0;
}
