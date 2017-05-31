#include "DataClass.h"

using namespace std;

DataClass::DataClass() {
	   dataCount=0;
}

int DataClass::add(int degree) {
    if (dataCount >=25)
					   return 0;
				int i = dataCount;
				theData[i].degree = degree;
				theData[i].radian = (float) degree * (3.14 /180.0);
				theData[i].sin = sin(theData[i].radian);
				++dataCount;
			 return dataCount;
}

void DataClass::print(){
    for (int i=0;i<dataCount; i++) {
        cout << theData[i].degree << " " << theData[i].radian << " " << theData[i].sin << endl;
}
}
