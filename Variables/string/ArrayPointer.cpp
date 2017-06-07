#include <iostream>
using namespace std;

int main()
{

	char c1[10] = "Hello";

	char * c2;

	c2=c1;

	cout<<c1<<endl;
	cout <<" print each element of  array c1"<< c1[0]<<endl;

	int i=0;
	while(c2[i] != '\0')
	{
	 cout <<"element" << i<<" "<< c2[i] << endl;
	 i++;
	}


	cout <<"the first element of array c1, c1 itself is not a pointer, c1++ does not work"<< c1[0]<<endl;
        while (*c2 != '\0')
	{
	cout << "element" << i << " " << *c2 << endl;
	c2++;
	}	
}

