#include <iostream>  
using namespace std;  

enum Type  {  
   INT,  
   FLOAT,  
   STRING,  
 };  

void Display(void *pVoid, Type eType)  {    
   switch (eType)  {  
	case INT:  
 		cout << *(int*)pVoid << endl;  
		break;  
	case FLOAT:  
		cout << *(float*)pVoid << endl;  
		break;  
	case STRING:  
		cout << (char*)pVoid << endl;  
		break;  
   }  
}    

int main()  
{  
   int a = 10;  
   float b = 987.654;  
   char c1[10] = "good";
   char *c = c1;
   Display(&a, INT);  
   Display(&b, FLOAT);  
   Display(c, STRING);  
   cout << "output by pointer," << c <<endl;
   return 0;  


} 
