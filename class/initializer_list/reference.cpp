#include<iostream>
using namespace std;
 
class Test {
	    int &r;
	public:
					Test(int &t):r(t) {}  //Initializer list must be used
					int getT() { return r; }
};
 
int main() {
	    int x = 20;
					Test t1(x);
					cout<<t1.getT()<<endl;
					x = 30;
					cout<<t1.getT()<<endl;
					return 0;
}
/* OUTPUT:
	*     20
	*         30
	*          */
