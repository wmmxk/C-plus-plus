#include<iostream>
using namespace std;

class A
{
   int node;

	  public:
    
			  int fetch()
					{return node;}


			  A(int input)
					{
						node = input;
					}
    
					A(){node=4;}

					int sum(int num)
					{
      return num+2;
					}

     int wrapper()
					{
      return sum(node);
					}

};


int main()
{
 A obj1(10);
	cout << "member variable value: "
		    << obj1.fetch() << endl;

	cout << "by wrapper: " 
		    << obj1.wrapper() << endl;

	return 0;
}
