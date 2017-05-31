/************************
	* This defines a class DataClass that is a database of dta.
	* Eac entry has 3 elements.
	* The first is degrees, entered by the user.
	* The second is the equivalent in radians.
	* The last is the sin.
	* ***********************/

#include <math.h>
#include <iostream>

class DataClass {

public:
	     DataClass();
						int add(int degree);
						void print();
private:
						int dataCount;
						struct dataStruct {
							  int degree;
									float radian;
									float sin;
						};
      dataStruct theData[25];
};
