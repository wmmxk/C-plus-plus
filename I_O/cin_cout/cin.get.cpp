#include<iostream>
using namespace std;
int main()
{
 char ch;
 cout << "Type and I shall repead. \n";
	cin.get(ch);
	while (ch != '.')
	{
   if (ch == '\n')
				 cout << ch;
			else
				 cout << ch+1;

			cin.get(ch);

	}
	return 0;
}
