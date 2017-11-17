/*source: http://www.geeksforgeeks.org/g-fact-93/

in C++, if a class has a constructor which can be called with a single argument, then this constructor becomes conversion constructor because such a constructor allows conversion of the single argument to the class being constructed.

arguments passed to the constructor function have default values, so it can be called with a single argment


in the line "if (com1 == 3.0)" 3.0 is converted to a complex number implicitly

		*/
#include <iostream>

using namespace std;
class Complex {
  private:
			  double real;
					double imag;
		public:
					Complex(double r= 0.0, double i = 0.0) : real(r), imag(i) {}
					bool operator==(Complex rhs) {
          return (real == rhs.real && imag == rhs.imag)? true:false;
					}
};

int main()
{
 Complex com1(3.0,0.0);

	if (com1 == 3.0)
		  cout << "Same \n";
	else
		  cout << "Not Same\n";
 return 0;
}
