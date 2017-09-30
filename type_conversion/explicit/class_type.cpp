/*

source: http://www.cplusplus.com/doc/oldtutorial/typecasting/

the code is show a syntactically correct code which cause runtime errors

Traditional explicit type-casting allows to convert any pointer into any other pointer type, independently of the types they point to. The subsequent call to member result will produce either a run-time error or a unexpected result.

*/
// class type-casting
#include <iostream>
using namespace std;

class CDummy {
    float i,j;
};

class CAddition {
	int x,y;
  public:
	CAddition (int a, int b) { x=a; y=b; }
	int result() { return x+y;}
};

int main () {
  CDummy d;
  CAddition * padd;
  padd = (CAddition*) &d;
  cout << padd->result();
  return 0;
}
