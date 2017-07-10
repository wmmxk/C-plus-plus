#include<iostream>
using namespace std;

int remove_duplicate(int *begin,  int *end);
int main()
{
int arr[5]={1,1,2,2,3};
int index;
index = remove_duplicate(arr, arr+5);

int i;
for (i=0;i<=index;i++)
  {
   cout<<arr[i]<<"\n";
  }

return 0;
}


int remove_duplicate(int * begin, int *end)
{
   int index = 0;
			const int * pt;
			for (pt = begin+1;  pt != end; pt++)
			{
     if (*(begin+index) != * pt)
					{
						 *(begin+(++index)) = *pt;
					}
			}
			
			return index;

}

