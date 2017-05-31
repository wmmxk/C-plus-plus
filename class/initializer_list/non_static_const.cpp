#include<iostream>
using namespace std;
 
class Test {
	    const int c;
	public:
					    Test(int t):c(t) {}  //Initializer list must be used
									    int getT() { return c; }
};
 
int main() {
	    Test t1(10);
					    cout<<t1.getT();
									    return 0;
}
