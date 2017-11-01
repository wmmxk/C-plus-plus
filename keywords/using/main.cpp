/*source: P138 in the book about template in c++
	*
	* compile g++ -std=c++11 main.cpp
	*
	* run it ./a.out
	* enter a string and enter then enter a number
	*
	*
	* To check: You replace the std::string in "using Entry" and "std::map" with char *, you can not cout the name. If you replace it with "char []", you can not even compile
	*
	*
	*/
#include <iostream>
#include <iomanip>
#include <map>
#include <string>


using Entry = std::pair<std::string, size_t>;
Entry get_entry() {
  std::cout << "Enter a name: ";
		char name[10];
		size_t age;
		std::cin >> name >> age;
		std::cout << "The name you entered is :"
			         << name
												<< "\n";
		return std::make_pair(name, age);

}


int main()
{ 
	std::map<std::string, size_t> people;
	Entry entry{get_entry()};
	auto pr = people.insert(entry);

	for (const auto& p: people)
		std::cout << std::setw(10) 
			         << std::left
												<< p.first
												<< " "
												<< p.second
												<< "\n";
return 0;
}
