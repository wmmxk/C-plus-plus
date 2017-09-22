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

					int sum(int num=node)
					{
      return num+2;
					}


};


int main()
{
 A obj1(10);
	cout << "member variable value: "
		    << obj1.fetch() << endl;

	cout << "by wrapper: " 
		    << obj1.sum() << endl;

	return 0;
}
