//source: http://www.geeksforgeeks.org/copy-constructor-in-cpp/
#include<iostream>
#include<cstring>
using namespace std;

class String
{

	private:
		 char *s;
			int size;

public:
			String(const char *str = NULL); // constructor
			~String() {delete [] s; }
			String(const String &);  // copy constructor

			void print() { cout << s << endl;}

			void change(const char * ); // Function to change

};


String::String(const char *str)
{
   //this line causes segmentation fault: delete [] s;
			size = strlen(str);

			s = new char[size+1];
   if(s == NULL) { cout << "Null pointer" << endl; }

			strcpy(s, str);
}


//copy constructor

String::String(const String& old_str)
{
 size = old_str.size;
	s = new char[size+1];
 if(s == NULL) { cout << "Null pointer" << endl; }
	strcpy(s,old_str.s);
}


void String::change(const char *str)
{
  delete [] s;
  size = strlen(str);

		s = new char[size+1];
		if(s == NULL) { cout << "Null pointer" << endl; }
		strcpy(s,str);
}

int main()

{
 String str1("GeeksQuiz1");

 String str2 = str1;

 str1.print();

	str2.change("GeeksQuiz2");
 
	str1.print();

	str2.print();

	return 0;
 
}
