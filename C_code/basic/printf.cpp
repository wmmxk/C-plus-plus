#include <stdio.h>

void PringSomeMessage( char* p);

int main()
{
   char arr[20] = "hello Xiaokang";
   PringSomeMessage(arr);
   printf("This is the pointer not the value it pointed to %p\n", arr);
   printf("In this conext the array name and the address of the first \n element is the same thing %p\n", &arr[0]);
   return 0;
}

void PringSomeMessage(char *p)
{
  printf("The array name serves as a pointer: %s\n", p);
}
