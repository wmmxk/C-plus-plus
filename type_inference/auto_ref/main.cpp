/* source: Chapter 4 the book entitled "Using the C++ Standard Template Libraries" by Ivor Horton
	*
	* loop through a map using a const auto reference. The auto reference will be inferred from the for loop
 the return type of map.insert

*/

#include <iostream>
#include <map>
#include <iomanip>

int main() {
std::map<std::string, size_t> people {{"Ann",25},{"Bill",28}};

auto pr = std::make_pair("Fred",11);
auto ret_pr = people.insert(pr);

std::cout << ret_pr.first->first 
	         << " " 
										<< ret_pr.first->second
									 << " "
									 << std::boolalpha
									 << ret_pr.second
									 << "\n";	


for (const auto& p : people) 
std::cout << std::setw(10) << std::left << p.first << " " << p.second << "\n";



return 0;


}
