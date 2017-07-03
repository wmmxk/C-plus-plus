#include <iostream>

using namespace std;

main()

{
 int i = 3;
 int *pt = &i;

	cout << "the value at &i: "
		    << i <<"\n\n";

	*pt = 5;

	cout << "The value at the pointer: "
		    << i << "\n\n";

 return 0;
}
