#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string text;
  int age;
  
		cout << "How old are you?";
		cin >> age;

		cin.ignore();

		cout << "What is your name?";
		getline(cin, text);

		cout << "Hello, " << text << endl;

		return 0;
}

